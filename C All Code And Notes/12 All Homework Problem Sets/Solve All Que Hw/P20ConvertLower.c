/*
Write a program to convert all lowercase vowels to
uppercase in a string.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i;

    // Take input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // safer input function

    // Convert lowercase vowels to uppercase
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a')
            str[i] = 'A';
        else if (str[i] == 'e')
            str[i] = 'E';
        else if (str[i] == 'i')
            str[i] = 'I';
        else if (str[i] == 'o')
            str[i] = 'O';
        else if (str[i] == 'u')
            str[i] = 'U';
    }

    // Display result
    printf("String after converting lowercase vowels to uppercase:\n");
    printf("%s", str);

    return 0;
}
