// Implement Horner’ rule for evaluating the following polynomial expression at x =5.
// Calculate the total number of times additions and multiplication operations will occur
// in this example
// p(x) = 3x^ 5 - 4x^ 4 + 5x^ 3 - 6x + 9

#include <stdio.h>

int main()
{
    int coeffs[] = {9, -6, 0, 5, -4, 3};
    int n = sizeof(coeffs) / sizeof(coeffs[0]) - 1; // degree of the polynomial
    int x = 5;                                      // value of x is fixed as 5

    int result = coeffs[n]; // initialize result with the last coefficient
    int add_count = 0;
    int mul_count = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        result = result * x + coeffs[i];
        mul_count++;
        add_count++;
    }

    printf("p(x) = 3x^ 5 - 4x^ 4 + 5x^ 3 - 6x + 9 = p(%d) = %d\n", x, result);
    printf("Number of additions: %d\n", add_count);
    printf("Number of multiplications: %d\n", mul_count);

    return 0;
}

// Output:

// p(x) = 3x^ 5 - 4x^ 4 + 5x^ 3 - 6x + 9 = p(5) = 7479
// Number of additions: 5
// Number of multiplications: 5