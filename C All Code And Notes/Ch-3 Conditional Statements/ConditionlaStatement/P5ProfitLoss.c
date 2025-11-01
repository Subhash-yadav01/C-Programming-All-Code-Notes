/*
    Write a program to determine whether the seller has made profit or incurred loss.
    also determine how much profit he made or loss he incurred ?
*/

#include <stdio.h>

int main(){
    float cost, selling;
    
    printf("Please enter the cost price: ");
    scanf("%f", &cost);

    printf("Please enter the selling price: ");
    scanf("%f", &selling);

    if(cost < selling){
        printf("The profit in incurred");
    }

    if(selling > cost){
    printf("The loss in incurred");
    }

    if(selling == cost){
        printf("No Profit and No Loss");
    }
}