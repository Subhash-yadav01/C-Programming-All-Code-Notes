// Make your own pow function.

#include <stdio.h>

// Function to calculate power (base^exp)
double myPow(double base, int exp)
{
    double result = 1;
    int i;

    // For positive exponent
    if (exp > 0)
    {
        for (i = 1; i <= exp; i++)
        {
            result *= base;
        }
    }
    // For negative exponent
    else if (exp < 0)
    {
        for (i = 1; i <= -exp; i++)
        {
            result /= base;
        }
    }
    // For exponent = 0, result remains 1
    return result;
}

int main()
{
    double base;
    int exponent;

    // Take base and exponent from user
    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    // Display result
    printf("%.2lf raised to the power %d is: %.2lf\n", base, exponent, myPow(base, exponent));

    return 0;
}
