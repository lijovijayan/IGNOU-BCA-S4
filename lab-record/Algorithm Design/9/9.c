// Write a C program to calculate the length of a string. 
// Calculate the total time taken to execute this program.

#include <stdio.h>
#include <string.h>
#include <time.h>

int stringLength(char* str) {
    int length = 0;

    while (*str != '\0') {
        length++;
        str++;
    }

    return length;
}

int main() {
    char str[100];
    int length;
    clock_t start, end;
    double cpu_time_used;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    start = clock();

    length = stringLength(str);

    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf("Length of the string: %d\n", length);
    printf("Total time taken: %f seconds\n", cpu_time_used);

    return 0;
}