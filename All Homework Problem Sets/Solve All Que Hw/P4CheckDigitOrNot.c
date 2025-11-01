//  Write a program to check if given character is digit or not.

#include <stdio.h>
#include <ctype.h> // for isdigit() function

int main()
{
    char ch;

    // Take character input from user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if it's a digit
    if (isdigit(ch))
        printf("%c is a digit.\n", ch);
    else
        printf("%c is not a digit.\n", ch);

    return 0;
}
