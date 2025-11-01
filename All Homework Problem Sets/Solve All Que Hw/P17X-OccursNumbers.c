/*
In an array of numbers, find how many times does
a number 'x' occurs.
*/

#include <stdio.h>

int main()
{
    int n, i, x, count = 0;

    // Take number of elements
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Take number to search
    printf("Enter the number to count (x): ");
    scanf("%d", &x);

    // Count occurrences of x
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
            count++;
    }

    // Display result
    printf("Number %d occurs %d time(s) in the array.\n", x, count);

    return 0;
}
