#include <stdio.h>
#include <stdlib.h>

void main () {
    int age = 19;
    int *pAge = &age;
    double gpa = 1.25; 
    double *pGpa = &gpa;
    char grade = 'A';
    char *pGrade = &grade;

    printf("%d %d %d", &pAge, &pGpa, &grade);
}