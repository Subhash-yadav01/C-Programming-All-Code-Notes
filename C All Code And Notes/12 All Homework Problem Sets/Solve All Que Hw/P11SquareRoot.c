// Write a function to find square root of a number.

#include <stdio.h>
#include <math.h> // for sqrt() function

// Function to find square root
double findSquareRoot(double num)
{
    return sqrt(num);
}

int main()
{
    double n, result;

    // Take number input from user
    printf("Enter a number: ");
    scanf("%lf", &n);

    // Call the function
    result = findSquareRoot(n);

    // Display result
    printf("Square root of %.2lf is: %.2lf\n", n, result);

    return 0;
}
