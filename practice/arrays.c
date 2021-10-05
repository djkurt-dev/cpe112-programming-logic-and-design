#include <stdio.h>
#include <stdlib.h>

void main() {
    int luckyNumbers[] = { 0, 1, 2, 3, 4,5,6,7};
    luckyNumbers[0] =356;
    for(int i = 0; i<(sizeof(luckyNumbers)/sizeof(int)); i++) {
        if(luckyNumbers[i] % 2 == 0) {
            printf("%d\n", luckyNumbers[i]);
        }
        else
        {
            continue;
        }        
    }
}