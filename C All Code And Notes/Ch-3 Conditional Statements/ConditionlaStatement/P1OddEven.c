// Take positive integer input and tell if it is even or odd ?

#include <stdio.h>

int main(){
    int num;
    printf("Please enter the any integer number: ");
    scanf("%d", &num);

    if (num % 2==0 ){
         printf("The number is even"); 
    }
    else{
        printf("The numer is odd");
    }
}