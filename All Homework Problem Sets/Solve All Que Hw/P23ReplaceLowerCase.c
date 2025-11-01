/*
Write a program to replace lowercase letters with
uppercase & vice versa in a string.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str); // Using gets for simplicity (not safe, use fgets in real code)

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32; // Convert lowercase to uppercase
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32; // Convert uppercase to lowercase
        }
    }

    printf("Modified string: %s\n", str);

    return 0;
}
