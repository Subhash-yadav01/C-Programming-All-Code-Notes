/*
Write a program in C to print all the letters in english
alphabet using a pointer.
*/

#include <stdio.h>

int main()
{
    char alphabet[26];
    char *ptr;
    int i;

    // Store alphabets A to Z in the array
    for (i = 0; i < 26; i++)
    {
        alphabet[i] = 'A' + i;
    }

    // Pointer points to the first element
    ptr = alphabet;

    // Print alphabets using pointer
    printf("English Alphabets (A-Z):\n");
    for (i = 0; i < 26; i++)
    {
        printf("%c ", *(ptr + i));
    }

    printf("\n");
    return 0;
}
