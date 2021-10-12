#include <stdio.h>
#include <stdlib.h>

void main() {
    //2D Arrays 
    int faveNums[3][2] = {
        {2,4},
        {6,9},
        {8,1}
    };
    double mostFave = 8.8;

    for(int i=0; i<3; i++) {
        for(int j=0; j<2; j++) {
            printf("%d ", faveNums[i][j]);
        }
        printf("\n");
        
    }
    printf("%p %p %p", &faveNums, &mostFave, &faveNums[1][1]);
    
    // int luckyNumbers[] = { 0, 1, 2, 3, 4,5,6,7};
    // luckyNumbers[0] =356;
    // for(int i = 0; i<(sizeof(luckyNumbers)/sizeof(int)); i++) {
    //     if(luckyNumbers[i] % 2 == 0) {
    //         printf("%d\n", luckyNumbers[i]);
    //     }
    //     else
    //     {
    //         continue;
    //     }        
    // }
}