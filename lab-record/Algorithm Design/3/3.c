// Write a C program to evaluate a polynomial using
// Horner's rule and count how many times the loop will execute

#include <stdio.h>

int main()
{
    int degree, i;
    float x, result = 0.0;
    int loopCount = 0;

    printf("Enter the degree of the polynomial: ");
    scanf("%d", &degree);

    float coefficients[degree + 1];

    printf("Enter the coefficients of the polynomial (from highest to lowest degree):\n");
    for (i = degree; i >= 0; i--)
    {
        printf("Coefficient of x^%d: ", i);
        scanf("%f", &coefficients[i]);
    }

    printf("Enter the value of x: ");
    scanf("%f", &x);

    for (i = degree; i >= 0; i--)
    {
        result = (result * x) + coefficients[i];
        loopCount++;
    }

    printf("Result: %.2f\n", result);
    printf("Loop count: %d\n", loopCount);

    return 0;
}