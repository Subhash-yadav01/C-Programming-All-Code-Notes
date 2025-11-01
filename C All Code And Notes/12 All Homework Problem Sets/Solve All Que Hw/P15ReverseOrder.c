/*
Write a program in C to print the elements of an
array in reverse order.
*/

#include <stdio.h>

int main()
{
    int n, i;

    // Take number of elements from user
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Declare array

    // Take array elements input
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Print elements in reverse order
    printf("Array elements in reverse order:\n");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
