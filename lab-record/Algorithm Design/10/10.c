// Write a program to compute x^n, where both x and n are integer numbers. 
// Calculate the total running time of the program and how many times the 
// loop will execute.

#include <stdio.h>
#include <time.h>

long long int power(int x, int n, int *loopCount)
{
    long long int result = 1;
    *loopCount = 0;
    int i;

    for (i = 0; i < n; i++)
    {
        result *= x;
        (*loopCount)++;
    }

    return result;
}

int main()
{
    int x, n, loopCount;
    long long int result;
    clock_t start, end;
    double cpu_time_used;

    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    start = clock();

    result = power(x, n, &loopCount);

    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("%d raised to the power of %d is %lld\n", x, n, result);
    printf("Total loop executions: %d\n", loopCount);
    printf("Total running time: %f seconds\n", cpu_time_used);

    return 0;
}