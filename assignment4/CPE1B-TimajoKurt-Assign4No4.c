#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.1416

void main() {
    double radius, area, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    circumference = 2*pi*radius;
    area = pi*pow(radius, 2);

    printf("\nArea of the circle = %.2lf sq. units\n", area);
    printf("Circumference = %.2lf units", circumference);
}

/* Create a C program to compute and display the area and
circumference of a circle, given as input its radius*/