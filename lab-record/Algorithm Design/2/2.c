// Write a C program to combine any two given strings. 
// Calculate the number of times the loop will execute and the number of 
// comparison operations required in this program.

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], combined[200];
    int i, j, loopCount = 0, comparisonCount = 0;

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    i = 0;
    while (str1[i] != '\0')
    {
        combined[i] = str1[i];
        i++;
        loopCount++;
        comparisonCount++;
    }

    j = 0;
    while (str2[j] != '\0')
    {
        combined[i] = str2[j];
        i++;
        j++;
        loopCount++;
        comparisonCount++;
    }

    combined[i] = '\0';

    printf("Combined string: %s\n", combined);
    printf("Loop count: %d\n", loopCount);
    printf("Comparison count: %d\n", comparisonCount);

    return 0;
}