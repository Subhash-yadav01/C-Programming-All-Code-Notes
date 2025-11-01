// Write a program to calcualte area of circle with user input ?

#include <stdio.h>

int main(){

    printf("Enter the radus: ");
    float radius;
    scanf("%f",&radius);

    float pi = 3.14;
    float area = pi * radius * radius;

    printf("Area of circle is: %f", area);

}