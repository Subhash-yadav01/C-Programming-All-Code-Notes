// Write a program to remove blank spaces in a string.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    char result[200];
    int i, j = 0;

    // Take input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove spaces
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
        {
            result[j] = str[i];
            j++;
        }
    }

    result[j] = '\0'; // Null terminate the result string

    // Display output
    printf("String after removing spaces:\n%s\n", result);

    return 0;
}
