// Write a C program to find minimum of 10 numbers and calculate time complexity 
// of each statement and total complexity of a program.


#include <stdio.h>
#include <limits.h>

int main()
{
    // Declare variables
    int n, min_num = INT_MAX, num;

    // Get the number of numbers from the user
    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);

    // Read numbers from the user
    for (int i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);

        // Update minimum number if num is less than min_num
        if (num < min_num)
        {
            min_num = num;
        }
    }
    // Print the minimum number
    printf("Minimum number is: %d\n", min_num);

    // Calculate the time
    printf("Time complexity of each statement\n\n");
    printf("Time complexity of `printf()` function is O(1)\n");
    printf("Time complexity of `scanf()` function is O(1)\n");
    printf("Time complexity of `for` loop is O(n)\n");
    printf("Time complexity of `if` statement is O(1)\n\n");
    printf("Total time complexity of the program is O(n)");

    return 0;
}