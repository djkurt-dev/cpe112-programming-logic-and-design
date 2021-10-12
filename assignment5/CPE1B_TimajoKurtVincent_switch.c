#include <stdio.h>
#include <stdlib.h>

void main() {
    char choice;
    double Celsius, Fahrenheit;

    menu:
    printf ("Select task of Conversion: \n\t(a) Celsius to Fahrenheit\n\t(b) Fahrenheit to Celsius\n>> ");
    choice = getc(stdin);

    switch (choice) {
        case 'a':
            printf("\n************** Celsius to Fahrenheit **************\n\n");
            printf("Enter temperature in Celsius: ");
            scanf("%lf", &Celsius);

            Fahrenheit = (Celsius*9/5.0) + 32; 

            printf("\n%.2lf Celsius = %.2lf Fahrenheit", Celsius, Fahrenheit); 
            break;

        case 'b':
            printf("\n************** Fahrenheit to Celsius **************\n\n");
            printf("Enter temperature in Fahrenheit: ");
            scanf("%lf", &Fahrenheit);

            Celsius = 5/9.0 * (Fahrenheit -32) ;

            printf("\n%.2lf deg Fahrenheit = %.2lf deg Celsius", Fahrenheit, Celsius); 
            break;
        default:
            printf ("\nInvalid Choice\n");
            goto menu;

    }
}