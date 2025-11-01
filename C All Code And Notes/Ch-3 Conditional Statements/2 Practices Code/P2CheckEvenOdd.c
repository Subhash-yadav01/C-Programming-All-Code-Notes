//  > check if a number is odd or even
#include <stdio.h>
int main()
{
    int number;
    
    printf("Please enter number: ");
    scanf("%d", &number);
    if (number % 2 == 0)
    {
        printf("This is even number");
    }
    else
    {
        printf("This is odd number");
    }
    return 0;
}