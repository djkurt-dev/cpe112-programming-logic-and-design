#include <stdio.h>
#include <stdlib.h>

void main() {
    double Celsius, Fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%lf", &Celsius);

    Fahrenheit = (Celsius*9/5.0) + 32; //Formula for Celsius to Fahrenheit conversion

    printf("\n%.2lf Celsius = %.2lf Fahrenheit", Celsius, Fahrenheit); 
}

/*Create a C program to convert an input temperature in Celsius to its
equivalent temperature in Fahrenheit and output the Fahrenheit. 
Perform correct algebraic manipulation on the formula given in #5
above to obtain the formula for converting from Celsius to Fahrenheit.*/