// Write and test a program to sort the following array of integer numbers using Insertion
// Sort. Calculate the total no of comparison operations and the number of times the loop
// will execute. 

#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, key, j, comparisons = 0, loopExecutions = 0;
    for (i = 1; i < n; i++) {
        loopExecutions++;
        key = arr[i];
        j = i-1;
        while (j >= 0 && arr[j] > key) {
            loopExecutions++;
            comparisons++;
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
    printf("Sorted array: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nTotal number of comparisons: %d\n", comparisons);
    printf("Total number of loop executions: %d", loopExecutions);
}

int main() {
    int arr[] = {85, 45, 70, 30, 25, 35, 40, 5, 10, 17};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, n);
    return 0;
}

// Output:

// Sorted array:
// 5 10 17 25 30 35 40 45 70 85
// Total number of comparisons: 24
// Total number of loop executions: 45
