// Write a program to print the average of 3 numbers.

#include <stdio.h>

int main()
{
    float a, b, c, average;

    // Take three numbers from user
    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate average
    average = (a + b + c) / 3;

    // Display result
    printf("Average = %.2f\n", average);

    return 0;
}
