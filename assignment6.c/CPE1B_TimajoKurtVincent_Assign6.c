#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main() {
    int i=1,x,largest;
    char ans;
    do
    {
        printf("\nInput integer: ");
        scanf("%d",&x);
        if(i==1) {
            largest = x;            
        }   
        else{
            if(x>largest){
                largest = x;
            }
        }
        printf("\nCurrent largest integer: %d", largest);        
        printf("\nDo you want to input again? (y/n): ");
        ans = getche();
        i++;
    } while (ans == 'y' || ans == 'Y');
    
}