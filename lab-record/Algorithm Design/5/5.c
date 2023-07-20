// Write a C program to sort the following list of numbers using Bubble Sort
//  algorithm:
// 15 27 52 85 45 30
// Calculate
// (a) how many times the outer loop and inner loop will execute,
// and
// (b) how many exchange operations will execute


#include <stdio.h>

void bubbleSort(int arr[], int n)
{
    int i, j, temp;
    int outerLoopCount = 0, innerLoopCount = 0, exchangeCount = 0;

    for (i = 0; i < n - 1; i++)
    {
        outerLoopCount++;

        for (j = 0; j < n - i - 1; j++)
        {
            innerLoopCount++;

            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                exchangeCount++;
            }
        }
    }

    printf("Sorted list: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Outer loop count: %d\n", outerLoopCount);
    printf("Inner loop count: %d\n", innerLoopCount);
    printf("Exchange count: %d\n", exchangeCount);
}

int main()
{
    int arr[] = {15, 27, 5, 2, 85, 45, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;

    printf("Original list: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubbleSort(arr, n);

    return 0;
}