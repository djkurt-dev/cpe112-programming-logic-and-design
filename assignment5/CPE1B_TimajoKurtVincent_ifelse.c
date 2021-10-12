#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.1416

void main () {
    char choice;
    double area, perimeter, circumference, base, height, radius, side, length, width;

    menu:
    printf ("Select task of computation: \n\t(a) Right Triangle: Area and Perimeter\n\t(b) Rectangle: Area and Perimeter\n\t(c) Square: Area and Perimeter\n\t(d) Circle: Area and Circumference\n>> ");
    choice = getc(stdin);

    //Right Triangle
    if(choice == 'a') {
        printf("\n************** Area and Perimeter of a Right Triangle **************\n\n");
        printf("Enter Base: ");
        scanf("%lf", &base);

        printf("Enter Height: ");
        scanf("%lf", &height);

        area = .5 * base * height;
        
        perimeter = base + height + sqrt((pow(base,2)) + (pow(height,2)));; 

        printf("Perimeter of the right triangle = %.2lf units\n", perimeter);
        printf("Area of the right triangle = %.2lf sq. units", area);
    }

    //Rectangle
    else if(choice == 'b') {
        printf("\n************** Area and Perimeter of a Rectangle **************\n\n");
        printf("Enter width of rectangle: ");
        scanf("%lf", &width);

        printf("Enter length of rectangle: ");
        scanf("%lf", &length);

        perimeter = 2*(width + length);
        area = width * length;

        printf("\nArea of rectangle = %.2lf sq. units\n", area);
        printf("Perimeter of rectangle = %.2lf units", perimeter);
    }

    //Square
    else if(choice == 'c') {
        printf("\n************** Area and Perimeter of a Square **************\n\n");
        printf("Enter side of the square: ");
        scanf("%lf", &side);

        area = pow(side, 2);
        perimeter = 4*side;

        printf("\nArea of the square = %.2lf\n", area);
        printf("Perimeter of the square = %.2lf", perimeter);
    }

    //Circle
    else if(choice == 'd') {
        printf("\n************** Area and Circumference of a Circle **************\n\n");
        printf("Enter the radius of the circle: ");
        scanf("%lf", &radius);

        circumference = 2*pi*radius;
        area = pi*pow(radius, 2);

        printf("\nArea of the circle = %.2lf sq. units\n", area);
        printf("Circumference = %.2lf units", circumference);
    }

    //Invalid Input
    else {
        printf("\nInvalid Input. Please enter a / b / c / d\n");
        goto menu;
    }    
}