#include <stdio.h>
#include <stdlib.h>


void main() {
    char line[255];

    FILE *emp = fopen("employees.txt", "r");

    while (fgets(line, sizeof(line), emp) != NULL)
    {
        fputs(line, stdout);
    }
    
    fclose(emp);
}