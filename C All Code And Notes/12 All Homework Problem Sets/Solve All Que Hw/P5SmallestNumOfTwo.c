// Write a program to print the smallest number of two.

#include <stdio.h>

int main()
{
    int a, b;

    // Take two numbers from user
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Compare and print the smallest
    if (a < b)
        printf("Smallest number is: %d\n", a);
    else
        printf("Smallest number is: %d\n", b);

    return 0;
}
