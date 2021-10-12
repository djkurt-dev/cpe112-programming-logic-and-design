#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main() { 
    float base, height, area, perimeter, hypotenuse;

    printf("Enter base and height: ");
    scanf("%f", &base);

    printf("Enter Height: ");
    scanf("%f", &height);

    area = .5 * base * height;
    hypotenuse = sqrt((pow(base,2)) + (pow(height,2)));
    perimeter = base + height + hypotenuse; 

    printf("\nRight triangle with base %.2f, and height %.2f\n", base, height);
    printf("Perimeter of the right triangle = %.2f units\n", perimeter);
    printf("Area of the right triangle = %.2f sq. units", area);
}

/* 
Create a C program to compute and display the area and perimeter
of a right triangle, given as inputs its base and height. To compute for the perimeter of a right triangle, given the 2 smaller
sides, base and height, you need to compute first for the hypotenuse
using the pythagorean formula. You may also use the built-in function
sqrt() defined in the math.h header file. The perimeter is just the sum
of the 3 sides.
*/