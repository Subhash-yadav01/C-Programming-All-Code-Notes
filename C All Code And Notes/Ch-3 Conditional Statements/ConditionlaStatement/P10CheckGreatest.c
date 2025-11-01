// Take three greatest integers input and print the greates to them.// nested if else ?

#include <stdio.h>
int main(){
    int num;

    printf("Enter the  numbers: ");
    scanf("%d", &num);

    if(num % 5 == 0){
        if(num % 3 == 0 ){
            printf("The number is divsible by 5 and 3");
        }
        else{
            printf("The number is not divisible by 5 and 3");
        }
    }
    else{
        printf("The number is not divisible by 5 and 3");
    }
    
}