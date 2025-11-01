// Write a program to print the largest number in an array.

#include <stdio.h>

int main()
{
    int n, i, largest;

    // Take number of elements from user
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Take array input
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Assume first element is the largest
    largest = arr[0];

    // Compare with other elements
    for (i = 1; i < n; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];
    }

    // Display result
    printf("The largest number in the array is: %d\n", largest);

    return 0;
}
