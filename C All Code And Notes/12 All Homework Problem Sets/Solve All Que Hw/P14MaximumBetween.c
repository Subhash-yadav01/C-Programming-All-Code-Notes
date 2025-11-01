/*
Write a program in C to find the maximum number
between two numbers using a pointer.
*/

#include <stdio.h>

int main()
{
    int a, b;
    int *p1, *p2;

    // Take two numbers as input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Assign addresses to pointers
    p1 = &a;
    p2 = &b;

    // Compare values using pointers
    if (*p1 > *p2)
        printf("Maximum number is: %d\n", *p1);
    else
        printf("Maximum number is: %d\n", *p2);

    return 0;
}
