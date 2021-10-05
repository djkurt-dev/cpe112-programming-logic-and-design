#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main() {
    float num1, num2;
    char ops;

    printf("First number: ");
    scanf("%f", &num1);

    printf("Operation [+ - * /]: ");
    ops = getche();

    printf("\nSecond number: ");
    scanf("%f", &num2);

    if(ops == '+' ){
        printf("%.2f", num1 + num2);
    }
    else if(ops == '-') {
        printf("%.2f", num1 - num2);
    }
    else if(ops == '*') {
        printf("%.2f", num1 * num2);
    }
    else if(ops == '/') {
        printf("%.2f", num1 / num2);
    }
    else {
        printf("Oops! You have entered an invalid operator.");
    }
}