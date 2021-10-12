#include <stdio.h>
#include <stdlib.h>

void main() {
    int guess;
    int numberToGUess = 10;
    do
    {
        printf("Guess the number: ");
        scanf("%d", &guess);
        
    } while (guess != numberToGUess);

    printf("You got it!");

}