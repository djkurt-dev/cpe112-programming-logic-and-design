#include<stdio.h>
#include<stdlib.h>

void main() {
    float width, length, area, perimeter;

    printf("Enter width of rectangle: ");
    scanf("%f", &width);

    printf("Enter length of rectangle: ");
    scanf("%f", &length);

    perimeter = 2*(width + length);
    area = width * length;

    printf("\nArea of rectangle = %.2f sq. units\n", area);
    printf("Perimeter of rectangle = %.2f units", perimeter);
}

/* Create a C program to compute and display the area and perimeter
of a rectangle, given as inputs its length and width. */