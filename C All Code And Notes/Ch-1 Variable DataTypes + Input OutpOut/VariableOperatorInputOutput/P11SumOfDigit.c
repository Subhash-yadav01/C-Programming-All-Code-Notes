/* If a three-digit number is input through the Keyboard, 
   Write a program ot calculate the sum of its digits ?
*/

#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    // Check if number is three-digit
    if (num < 100 || num > 999) {
        printf("Please enter a valid three-digit number.\n");
        return 0;
    }

    // Logic to find sum of digits
    digit = num % 10;   // Extract last digit
    sum += digit;

    num = num / 10;     // Remove last digit
    digit = num % 10;   // Extract second digit
    sum += digit;

    num = num / 10;     // Remove second digit
    sum += num;         // Add the first digit

    printf("Sum of digits = %d\n", sum);

    return 0;
}

