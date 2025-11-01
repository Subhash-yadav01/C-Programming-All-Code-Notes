// Take positve integer input and tell if it is divisivle by 5 and 3

#include <stdio.h>
int main(){

    int num;
    printf("Enter number: ");
    scanf("%d",&num);

    if(num % 5 == 0 && num  % 3 == 0){
       printf("The number is divisivle by 5 and 3");
    }
    else{
        printf("The number is not divisivle by 5 and 3");
    }
    return 0;
}