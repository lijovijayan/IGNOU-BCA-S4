// Write a C program to generate 10 numbers in Fibonacci series and 
// calculate how many times the loop, addition and assignment operations 
// will execute.


#include <stdio.h>

int main()
{
    int n = 10; // Number of Fibonacci numbers to generate
    int i, fib1 = 0, fib2 = 1, fib3;
    int loopCount = 0, additionCount = 0, assignmentCount = 0;

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; i++)
    {
        printf("%d ", fib1);
        loopCount++;
        assignmentCount++;

        fib3 = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib3;

        loopCount++;
        additionCount += 2;
        assignmentCount += 2;
    }

    printf("\n");
    printf("Loop count: %d\n", loopCount);
    printf("Addition count: %d\n", additionCount);
    printf("Assignment count: %d\n", assignmentCount);

    return 0;
}