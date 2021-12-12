#include<stdio.h>

void trace (int *x, int *y , int z){
    int t;
    z += *x;
    *x = *y + z;
    t = z; 
    z = *y; 
    *y = *x; 
    *x = t; 
}
void main ()
{
    int a,b,c, i;
    a=1 ; b=2; c=3;
    trace (&a,&b,c); printf("%d %d %d\n", a,b,c); 
    trace (&a,&b,c); printf("%d %d %d\n", a,b,c); 
    trace (&c,&b,a); printf("%d %d %d\n", a,b,c); 
    for (i=1; i <=3; i++){
        trace (&b,&a,c);
        //printf("%d %d %d\n", a,b,c);
    }
    printf("%d %d %d\n", a,b,c);
}
