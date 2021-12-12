#include <stdio.h>
#include <stdlib.h>

void main() {
// int x , y;

// for (int x=2 ;  x<=4 ; x++)
//     {
// 	for (int y=5 ; y>=3 ; y--)
// 	 {	
// 		printf("%d ",x+y); 
// 	 }
//     }
// for (y=1, x = 6; x > 0 ; x--){
//  y = y* x;
// }
          
// printf("y is equal to %d.",y);
// int x=1, y=1;
// for (x=1 ; x<10 ; x++)
// {
//     for (y=1 ; y<x ; y++)
//      {
// 	printf("-");
//      }
//     printf("%d",x); 
// }
// int A=13,B=25;
// if (A-B<=0)
// 	if (A+B<=0){
// 		printf("%d ",A+B);}
// else printf("%d ",A-B);
// printf("%d ", A+B);

// int x;

// for (x = 1; x < 45 ; x++) 
//     {
//           if (x % 9 != 0)   continue;
//           printf("%d,", x);
//      }

int num = 2417,w,x,y,z;
w = num % 10;
x = (num / 10) % 10;
y = (num / 100) % 10;
z = num / 1000;
printf("%d %d %d %d", w,x,y,z);
}