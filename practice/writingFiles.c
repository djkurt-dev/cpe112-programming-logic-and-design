#include <stdio.h>
#include <stdlib.h>


void main() {
    FILE *emp = fopen("employees.txt", "w");

    fprintf(emp, "\nKarizza, QA\nKelly, \tAnalyst\nKurt, \tJava Developer\nKyle,\tSoftware Engineer\nKahlil, Web Developer");

    fclose(emp);
}