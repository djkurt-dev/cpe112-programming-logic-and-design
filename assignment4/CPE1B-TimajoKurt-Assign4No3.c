#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main() {
    double side, area, perimeter;

    printf("Enter side of the square: ");
    scanf("%lf", &side);

    area = pow(side, 2);
    perimeter = 4*side;

    printf("\nArea of the square = %.2lf\n", area);
    printf("Perimeter of the square = %.2lf", perimeter);
}

/* Create a C program to compute and display the area and perimeter
of a square, given as input the length of its side. */