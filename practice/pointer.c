#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void pass(int *a, int *b){
	*a = *a + 5;
	*b = *b * 2;
	printf ("%d %d\n",*a,*b);
}

void main () {
    int x=10, y=-5, *p1, *p2, abs_y;
    printf("%d %d\n", x,y);
    p1 = &x;
    p2 = &y;
    abs_y = fabs(y);
    printf("Absolute value of %d = %d\n",y,abs_y);
    printf("Pointer %d points to %d\nPointer %d points to %d\n", p1,*p1,p2,*p2);
    pass(&x,&y);
    printf("%d %d\n", x,y);
    
}


