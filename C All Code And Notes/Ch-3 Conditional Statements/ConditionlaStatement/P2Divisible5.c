// Take positive interger input and tell if it is divisible by 5 or not ?

#include <stdio.h>
 
int main(){
    int x;
    printf("Please enter the number: ");
    scanf("%d",&x);

    if(x%5==0){
        printf("The number is divisible by 5");
    }
    else
        printf("The number is not divisible by 5");
}