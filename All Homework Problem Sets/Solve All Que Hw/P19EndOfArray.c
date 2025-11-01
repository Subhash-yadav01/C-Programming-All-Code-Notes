// Write a program to insert an element at the end of an array.

#include <stdio.h>

int main()
{
    int n, i, element;

    // Take number of elements from user
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[100]; // Array with extra space

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Take new element to insert
    printf("Enter element to insert at the end: ");
    scanf("%d", &element);

    // Insert element at end
    arr[n] = element;
    n++; // Increase array size

    // Display updated array
    printf("Array after inserting element at the end:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
