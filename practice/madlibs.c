#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//Utilizing input/output functions

void main() {
    char color[20], plural_noun[20], celebrity[20];

    printf("Enter a color: ");
    gets(color);
        
    printf("Enter a plural noun: ");
    gets(plural_noun);

    printf("Enter name of a celebrity: ");
    gets(celebrity);

    system("cls");

    printf("Roses are %s.\n",color);
    printf("%s are blue.\n", plural_noun);
    printf("I love ");
    puts(celebrity);
}