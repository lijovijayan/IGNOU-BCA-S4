// Implement Karatsuba’s method using Divide & Conquer method to multiply two
// integer numbers. Test the result in multiplication of the following numbers and count
// the number of multiplication operations. (7)
// 5 3 2 6 8 0 * 4 3 2 8 6

#include <stdio.h>
#include <math.h>

long long karatsuba(long long x, long long y)
{
    if (x < 10 || y < 10)
        return x * y;
    int n = fmax(log10(x) + 1, log10(y) + 1);
    int n_2 = n / 2;

    long long a = x / pow(10, n_2);
    long long b = x % (long long)pow(10, n_2);
    long long c = y / pow(10, n_2);
    long long d = y % (long long)pow(10, n_2);

    long long ac = karatsuba(a, c);
    long long bd = karatsuba(b, d);
    long long ad_bc = karatsuba(a + b, c + d) - ac - bd;

    return ac * pow(10, 2 * n_2) + ad_bc * pow(10, n_2) + bd;
}

int main()
{
    long long x = 532608000;
    long long y = 432860;
    long long result = karatsuba(x, y);
    printf("Result of %lld * %lld is %lld\n", x, y, result);
    return 0;
}

// (don't write this line on assignemnet) how to compile: gcc 6.c -lm

// Output
// Result of 532608000 * 432860 is 230544698880000