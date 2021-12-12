#include<stdio.h>

int A(int x)
{
	x++;
	return x+1;
}
int B(int y,int z )
{ //B(2,4)
	int a,t;
	t=1;
	for (a=1; a<=y; a++){
		t*=a; // t = 4 
		//printf("%d ", t);
	} // a<=4
	//printf("\n");
		
	for(a=1; a<z; a++){
		t+=a;
		//printf("%d ",t);
	}
		
		
	return t;
}
void main ()
{
	int n, m, x, y;
	n= 4; m= 2;
	x= B(n, m);
	y= B(m, n);
	printf("%d %d\n", x,y);
	x = A(B(n, m));
	printf ("%d\n", x);
	m= 3;
	n= A(n);
	printf ("%d %d %d\n", n, m, x);
}
