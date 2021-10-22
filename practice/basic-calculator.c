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

    char choice = 1;
    switch(ops) {
        case '+':
            printf("%.2f", num1 + num2);
            break;
        case '-':
            printf("%.2f", num1 - num2);
            break;
        case '*':
            printf("%.2f", num1 * num2);
            break;
        case '/':
            printf("%.2f", num1 / num2);
            break;
        default:
            printf("Oops! You have entered an invalid operator.");
    }

}