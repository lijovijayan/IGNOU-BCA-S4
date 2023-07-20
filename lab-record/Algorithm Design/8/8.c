// Write a program to calculate a factorial of a number and calculate total number 
// of comparison operations and multiplication operations. 
// Also calculate complexity of a program.


#include <stdio.h>

unsigned long long int factorial(int n, int *compOps, int *multOps)
{
    unsigned long long int fact = 1;
    *compOps = 0;
    *multOps = 0;
    int i;

    for (i = 1; i <= n; i++)
    {
        fact *= i;
        (*multOps)++;
        (*compOps)++;
    }

    return fact;
}

int main()
{
    int n, compOps, multOps;

    printf("Enter a number: ");
    scanf("%d", &n);

    unsigned long long int fact = factorial(n, &compOps, &multOps);

    printf("Factorial of %d is %llu\n", n, fact);
    printf("Total comparison operations: %d\n", compOps);
    printf("Total multiplication operations: %d\n", multOps);
    printf("Total time complexity of the program is O(n)");

    return 0;
}
