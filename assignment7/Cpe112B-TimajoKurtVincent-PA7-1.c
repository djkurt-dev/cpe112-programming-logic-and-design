//Timajo, Kurt Vincent
//CpE 1b
#include <stdio.h>


    // Declaration of the sum variable "oddSum" initially set equal to 0 and the integers array that has a size of 10.
    // variable i will be used in for loop.
    // The integers array is iterated with the for loop. In every iteration, i is checked to see if it is odd with the if statement. 
    // If i is odd, then the if body is executed where it adds the current value to the oddSum variable and prints every odd-positioned elements in the integers array. 
    // After the for loop, the sum of the odd-positioned elements is printed to the output.

void main() {
    int i,oddSum=0,integers[10];
    printf("Please enter 10 integers: \n");
    for(i=0;i<10;i++){
        scanf("%d",&integers[i]);
    }
    printf("\n");
    for (i = 0; i < 10; i++) {        
        if(i%2 != 0){ //filters the odd-positioned elements indexes 1,3,5,7,9      
            oddSum += integers[i];  //adds the odd-positioned elements to the oddSum 
            printf("The element in integers[%d] is %d.\n", i, integers[i]); 
        }
    }
    printf("\nThe sum of odd-positioned elements is %d.", oddSum);
}
