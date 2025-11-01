// Take a number and checked it is a three digit number

#include <stdio.h>
int main(){

    int num;
    printf("Enter number: ");
    scanf("%d",&num);

    if(num>99 && num<1000){
       printf("This is a three digit number....");
    }
    else{
        printf("This is not three digit number....");
    }
    return 0;
}