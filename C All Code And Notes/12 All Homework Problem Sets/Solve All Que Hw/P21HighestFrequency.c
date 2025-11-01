/*
Write a program to print the highest frequency
character in a string.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int freq[256] = {0}; // To store frequency of each ASCII character
    int i, max = 0;
    char result;

    // Take input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count frequency of each character
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && str[i] != '\n') // ignore spaces & newline
            freq[(unsigned char)str[i]]++;
    }

    // Find the character with highest frequency
    for (i = 0; i < 256; i++)
    {
        if (freq[i] > max)
        {
            max = freq[i];
            result = i;
        }
    }

    // Display result
    printf("Character with highest frequency: '%c'\n", result);
    printf("It appears %d time(s).\n", max);

    return 0;
}
