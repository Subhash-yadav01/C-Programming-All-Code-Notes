// Take integer input and print the absolute value of that integer ?

#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

     if(num < 0){  // num is negative 
        num = num * (-1);
     }
     printf("The absolute value is : %d",num);
    return 0;
}
