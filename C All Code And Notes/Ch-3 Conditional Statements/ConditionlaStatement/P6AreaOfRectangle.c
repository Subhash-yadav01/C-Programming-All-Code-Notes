/*
    Given the length and breath of a rectangle, Write a program to find 
    Whether the area of the rectangle is greater than its primeter ?
*/

#include <stdio.h>

int main() {
    float length, breadth, area, perimeter;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    if (area > perimeter) {
        printf("Area (%.2f) is greater than Perimeter (%.2f)\n", area, perimeter);
    } else if (area < perimeter) {
        printf("Perimeter (%.2f) is greater than Area (%.2f)\n", perimeter, area);
    } else {
        printf("Area and Perimeter are equal (%.2f)\n", area);
    }

    return 0;
}
