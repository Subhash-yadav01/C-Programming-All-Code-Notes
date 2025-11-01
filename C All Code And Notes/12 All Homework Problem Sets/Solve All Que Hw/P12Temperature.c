/*
Write a function to print "Hot" or "Cold" depending
on the temperature user enters.
*/

#include <stdio.h>

// Function to check temperature
void checkTemperature(float temp)
{
    if (temp >= 30)
        printf("Hot\n");
    else
        printf("Cold\n");
}

int main()
{
    float temperature;

    // Take temperature input from user
    printf("Enter the temperature: ");
    scanf("%f", &temperature);

    // Call the function
    checkTemperature(temperature);

    return 0;
}
