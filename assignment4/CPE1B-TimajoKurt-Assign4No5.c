#include <stdio.h>
#include <stdlib.h>

void main() {
    double Celsius, Fahrenheit;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &Fahrenheit);

    Celsius = 5/9.0 * (Fahrenheit -32) ; //Fahrenheit to Celsius conversion

    printf("\n%.2lf deg Fahrenheit = %.2lf deg Celsius", Fahrenheit, Celsius); 
}

/*Create a C program to convert an input temperature in Fahrenheit to
its equivalent temperature in Celsius and output the Celsius. 
Use the formula: Celsius = 5 / 9 x (Fahrenheit - 32) */