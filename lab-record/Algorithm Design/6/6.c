// Write a program that produces the median of a set of five integers (unsorted). 
// [The median of a set of integers is the middle element in the list when these 
// integers are listed in the order of increasing numbers]. 
// How much time will the program take to execute?


#include <stdio.h>
#include <time.h>

void bubbleSort(int arr[], int n)
{
    int i, j, temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {9, 3, 7, 1, 5}; // Set of five integers
    int n = sizeof(arr) / sizeof(arr[0]);
    int median;
    int i;

    printf("Original list: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Measure start time
    clock_t startTime = clock();

    bubbleSort(arr, n);

    // Measure end time
    clock_t endTime = clock();

    double timeTaken = (double)(endTime - startTime) / CLOCKS_PER_SEC;

    printf("Sorted list: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    median = arr[n / 2]; // Middle element

    printf("Median: %d\n", median);
    printf("Time taken: %f seconds\n", timeTaken);

    return 0;
}