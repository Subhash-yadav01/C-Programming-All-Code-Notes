// Take Two Integers input and tell if it is divisible by 5 or 3 but not divisible 15 ?
 
#include <stdio.h>

int main(){
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    if(num % 5 == 0 || num % 3 == 0){
        if(num % 15 != 0){
            printf("The number is divisible by 5 or 3 but not 15");
        }
        else{
            printf("The number is divisible by 15");
        }
    }
    else{
        printf("The number is divisible by 3 or 5");
    }

    return 0;
}