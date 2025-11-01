/*
Write a program to check if the given number is a
natural number.
*/

#include <stdio.h>

int main()
{
    int num;

    // Take number input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if it is a natural number
    if (num > 0)
        printf("%d is a natural number.\n", num);
    else
        printf("%d is not a natural number.\n", num);

    return 0;
}
