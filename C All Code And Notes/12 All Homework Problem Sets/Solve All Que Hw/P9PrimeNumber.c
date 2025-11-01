// Write a program to print prime numbers in a range.

#include <stdio.h>

int main()
{
    int start, end, i, j, isPrime;

    // Take range input from user
    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    // Loop through the range
    for (i = start; i <= end; i++)
    {
        if (i < 2)
            continue; // 0 and 1 are not prime

        isPrime = 1; // Assume number is prime

        // Check divisibility
        for (j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0; // Not a prime number
                break;
            }
        }

        if (isPrime)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}
