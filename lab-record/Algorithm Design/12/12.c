// Write a C program to find the maximum of the list 5, 10, 15, 4, 3, 20, 25. 
// How many times will the loop execute? 
// Calculate the total number of comparison operations in the program.

#include <stdio.h>

int main()
{
    int list[] = {5, 10, 15, 4, 3, 20, 25};
    int size = sizeof(list) / sizeof(list[0]);
    int max = list[0];
    int comparisons = 0;
    int i;

    for (i = 1; i < size; i++)
    {
        comparisons++;
        if (list[i] > max)
        {
            max = list[i];
        }
    }

    printf("Maximum value: %d\n", max);
    printf("Total loop executions: %d\n", size - 1);
    printf("Total comparison operations: %d\n", comparisons + 1);

    return 0;
}