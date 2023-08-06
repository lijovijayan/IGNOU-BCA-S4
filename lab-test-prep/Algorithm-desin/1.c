// Given an array of n distinct integers, determine the position of an
// integer in the list using a Binary Search algorithm : 20
// Array : 15, 20, 25, 30, 32, 35, 40, 45 search for 32.
// How many times the number of comparisons and division of an array
// will execute ?
#include <stdio.h>

int main()
{
    int arr[] = {15,
                 20,
                 25,
                 30,
                 32,
                 35,
                 40,
                 45};

    int numberToFind = 32;

    int arrLen = sizeof(arr) / sizeof(arr[0]);

    int start = 0;
    int end = arrLen - 1;
    int mid;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
            printf("\n\n\n%d", mid);
            printf("\n%d", arr[mid]);

        if (arr[mid] == numberToFind)
        {
            break;
        }

        if (numberToFind < arr[mid])
        {
            end = mid - 1;
        }
        else if (numberToFind > arr[mid])
        {
            start = mid + 1;
        }
    }

    printf("\n\n\n%d", mid);

    return 0;
}
