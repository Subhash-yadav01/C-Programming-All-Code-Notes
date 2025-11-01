//  Write a program to find the number of remainder ?

#include <stdio.h>

int main(){
    
    int a,b;

    printf("Enter the Dividend is: ");
    scanf("%d",&a);
    printf("Enter the Divisor is: ");
    scanf("%d",&b);

    int q = a / b;
    int r = a - b * q;  // Divisor * Quotient + Remainder = Divedend
    
    printf("The Remainder when %d is divided by %d is: %d", a, b, r);

    
}