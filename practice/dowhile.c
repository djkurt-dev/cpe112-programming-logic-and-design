#include <stdio.h>
#include <stdlib.h>

void main() {
    // int guess;
    // int numberToGUess = 10;
    // do
    // {
    //     printf("Guess the number: ");
    //     scanf("%d", &guess);
        
    // } while (guess != numberToGUess);

    // printf("You got it!");
    // for(int i = 1; i <=10; i++) {
    //     if(i%2==0) {
    //         //printf("%d", i);
    //         continue;
    //     }
    //     printf("%d\n", i);

    // }

    int i, j;
    for(i=1; i<=5; i++) {
        for(j=1; j<=5; j++) {
            printf("%d ", i*j);
        }
        printf("\n");
    }
}