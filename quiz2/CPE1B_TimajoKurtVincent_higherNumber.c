#include <stdio.h>
#include <stdlib.h>

void main() {
    int A, B;

    printf("Enter number A: ");
    scanf("%d", &A);
    printf("Enter number B: ");
    scanf("%d", &B);
    if (A>B) {
        printf("%d is higher.", A);
    }
    else if (A<B) {
        printf("%d is higher.", B);
    }
    else if(A==B) {        
        printf("Equal");
    }
    else {
        printf("Invalid");
    }
}   