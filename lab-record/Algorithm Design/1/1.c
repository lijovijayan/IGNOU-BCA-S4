// WAP to Implement the selection sort algorithm to sort an array of 10 
// integer numbers showing all the intermediate 
// steps: 35, 25, 15, 5, 14, 18, 16, 13, 17, 19 
// How many times will the inner loop execute and 
// number of key comparisons required.

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, minIndex;
    int k;
    int loopCount = 0;
    int comparisonCount = 0;

    for (i = 0; i < n - 1; i++)
    {
        minIndex = i;

        for (j = i + 1; j < n; j++)
        {
            comparisonCount++;
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }

        if (minIndex != i)
        {
            swap(&arr[i], &arr[minIndex]);
        }

        loopCount++;

        // Print intermediate steps
        printf("Step %d: ", i + 1);
        for (k = 0; k < n; k++)
        {
            printf("%d ", arr[k]);
        }
        printf("\n");
    }

    printf("\nLoop count: %d\n", loopCount);
    printf("Comparison count: %d\n", comparisonCount);
}

int main()
{
    int arr[] = {35, 25, 15, 5, 14, 18, 16, 13, 17, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;

    printf("Original array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    selectionSort(arr, n);

    printf("\nSorted array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}