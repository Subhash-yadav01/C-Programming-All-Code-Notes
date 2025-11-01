// Take 3 positive integers input and print the greates of them ?

#include <stdio.h>

int main(){
    int a, b, c;

    printf("Please Enter the value of a: ");
    scanf("%d", &a);

    printf("Please Enter the value of b: ");
    scanf("%d", &b);

    printf("Please Enter the value of b : ");
    scanf("%d", &c);

    if (a > b){   // b is greatest num......
        if(a > c)
            printf("%d is greatest number", a);
        else // a<c -> b < a <c
            printf("%d is greatest number", c);
    }
    else{
        if(b > c)   // b > a -> a ab sabse bada to nahi hai
        printf("%d is greatest number", b);
        else // c>b
        printf("%d is greatest",c);
    }
}