#include <stdio.h>
#include <stdlib.h>

int a,b,c;
void small (int x, int y, int z){
	x=y+1;
	y=y+1;
	z=z+1;
	printf("%d %d %d\n", a,b,c) ;
}
void medium (int *x, int *y, int *z ){ 
	*x=*x+1; 
	*y=*y+1; 
	*z=*z+1;
}
void large (int *x, int *y ,int *z ){ 
	*x=*x+1; 
	*y=*y+1; 
	*z=*z+1;
	printf ("%d %d %d\n", *x,*y,*z);
	small(*z,*x,*y);
}
void main() {	
	a=1; b=2; c=3;
	printf("%d %d %d\n ", a,b,c);
	small(a,b,c);
	printf("%d %d %d\n ", a,b,c);
	medium (&c,&b,&a);
	printf ("%d %d %d\n", a,b,c);
	large (&b,&c,&a);
	printf("%d %d %d\n",a,b,c);
}
