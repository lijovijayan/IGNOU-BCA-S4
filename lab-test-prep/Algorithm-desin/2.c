// Write a C•program to execute a polynomial expression using Horner's
// rule and count the number of key operations.

#include <stdio.h>

int _pow(int x, int power)
{
    int i;
    for (i = 0; i < power - 1; i++)
    {
        x = x * x;
    }
    return x;
}

// f(x) = 3x^3 + 4x^2 + 5^x + 6
int main()
{
    int range = 0;

    scanf("%d", &range);

    int coefficent[range];

    for (int i = range - 1; i >= 0; i--)
    {
        scanf("%d", &coefficent[i]);
    }

    int x = 0;

    scanf("%d", &x);

    int result = coefficent[0];

    for(int i = 1; i < range; i++) {
        result = result * x + coefficent[i];
    }
    printf("%d", result);
    return 0;
}
