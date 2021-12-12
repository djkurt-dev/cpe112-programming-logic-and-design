//Timajo, Kurt Vincent
//CpE 1b
#include <stdio.h>
#include <conio.h> 
    
    // In this program, 3 matrices were used in the form of 2D arrays of 2 rows and 3 columns. 
    // Declared in the program are matrix_one (matrix 1), matrix_two (matrix 2), and sum_matrix (resulting sum matrix). 
    // First it asks the user to input elements for matrix_one and matrix_two by using nested for loop. Inside the inner for loop 
    // is an if-else statement in which variable k is passed. k==0 is for the first matrix input and k==1 is for the second. 

void main() {
    int i,j,k,element,matrix_one[2][3],matrix_two[2][3], sum_matrix[2][3];    
    for(k=0; k<2; k++){ // k is for the order of current matrix
        for(i=0; i<2; i++) { // for 2 row iterations
            //input for matrix one
            if(k == 0){
                printf("\n");
                for(j=0; j<3; j++) {
                    printf("Element for matrix_one[%d][%d] = ", i, j);
                    scanf("%d",&matrix_one[i][j]);
                }
            }
            //input for matrix two
            else {
                printf("\n");
                for(j=0; j<3; j++) {
                    printf("Element for matrix_two[%d][%d] = ", i, j);
                    scanf("%d",&matrix_two[i][j]);
                }
            }
        }
    }
    //clearing the screen
    system("cls");

    // Displaying of matrices matrix 1, 2 and the sum matrix using nested for loop and if-else statements.
    // In every iteration it checks the current value of k in the outermost loop. If k==0, then it executes printing of matrix_one, 
    // else if k==1, it executes printing of matrix_two, and if k==2, it executes printing of sum_matrix.
    for(k=0; k<3; k++){
        for(i=0; i<2; i++) {
            //print matrix one            
            if(k == 0){
                if(k == 0 && i == 0){
                    printf("\nMatrix 1\n\t");
                }
                for(j=0; j<3; j++) {
                    printf("%d  ", matrix_one[i][j]);
                }
                printf("\n\t");
            }
            //print matrix two
            else if(k == 1) { 
                if(k == 1 && i == 0){
                    printf("\nMatrix 2\n\t");
                }
                for(j=0; j<3; j++) {
                    printf("%d  ", matrix_two[i][j]);
                }
                printf("\n\t");
            }
            //computing and printing the sum matrix
            else {
                if(k == 2 && i == 0){
                    printf("\n\nResulting Sum Matrix\n\t");
                }
                for(j=0; j<3; j++){
                    printf("%d  ", matrix_one[i][j] + matrix_two[i][j]);
                }
                printf("\n\t");
            }            
        }
    }
}
