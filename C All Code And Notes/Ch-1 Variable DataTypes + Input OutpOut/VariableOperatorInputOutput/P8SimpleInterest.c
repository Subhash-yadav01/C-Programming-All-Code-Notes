// Write a program to calculate the simple interst ?
#include<stdio.h>

int main(){

    int p,r,t;

    printf("Enter the principal Amount is: ");
    //int p;
    scanf("%d",&p);

    printf("Enter the Rate is: ");
    //int r;
    scanf("%d",&r);

    printf("Enter the time is: ");
    //int t;
    scanf("%d",&r);

    float result = (p * r * t) / 100;

    printf("The total amount is :%f " , result);

    return 0;
}