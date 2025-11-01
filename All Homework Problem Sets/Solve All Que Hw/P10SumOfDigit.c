// Write a function to find sum of digits of a number.

#include <stdio.h>

// Function to find sum of digits
int sumOfDigits(int num)
{
    int sum = 0;
    while (num != 0)
    {
        sum += num % 10; // Add last digit
        num /= 10;       // Remove last digit
    }
    return sum;
}

int main()
{
    int n, result;

    // Take number input from user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Call the function
    result = sumOfDigits(n);

    // Display result
    printf("Sum of digits of %d is: %d\n", n, result);

    return 0;
}
