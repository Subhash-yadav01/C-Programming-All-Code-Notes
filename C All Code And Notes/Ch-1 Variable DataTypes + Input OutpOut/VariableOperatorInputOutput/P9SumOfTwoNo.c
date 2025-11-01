// Write a program to calculate sum of two numbers ?

#include<stdio.h>

int main(){

    int num1, num2;
    printf("Please enter the first number: ");
    scanf("%d",&num1);

    printf("Please enter the second number: ");
    scanf("%d",&num2);

    int sum = num1 + num2;

    printf("The sum of two numbers is: %d",sum);
    
    return 0;
}