/*
   Write a program to calculate perimeter of rectangle.
   take sides, a & b, from the user.
*/

#include <stdio.h>

int main()
{
    float a, b, perimeter;

    // Taking input from user
    printf("Enter the length of the rectangle (a): ");
    scanf("%f", &a);

    printf("Enter the breadth of the rectangle (b): ");
    scanf("%f", &b);

    // Calculating perimeter
    perimeter = 2 * (a + b);

    // Displaying the result
    printf("The perimeter of the rectangle is: %.2f\n", perimeter);

    return 0;
}
