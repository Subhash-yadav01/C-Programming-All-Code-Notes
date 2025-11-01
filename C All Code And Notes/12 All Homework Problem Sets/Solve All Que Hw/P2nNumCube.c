// Take a number(n) from user & output its cube(n*n*n).

#include <stdio.h>

int main()
{
    int n, cube;

    // Take number from user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate cube
    cube = n * n * n;

    // Display result
    printf("Cube of %d is: %d\n", n, cube);

    return 0;
}
