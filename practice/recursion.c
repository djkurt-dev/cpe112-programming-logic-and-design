#include <stdio.h>

int find_GCD_of(int a, int b){
	while(a!=b){
		if(a>b){
			return find_GCD_of(a-b,b);
		} 
		else{
			return find_GCD_of(a,b-a);
		}		
	}
	return a;
}

void main(){
	int num1, num2;	
	printf("***** Please enter two numbers to find GCD *****\n");
	printf("\tFirst number: ");
	scanf("%d", &num1);
	printf("\tSecond number: ");
	scanf("%d", &num2);
	printf("\nThe GCD of %d and %d is %d.",num1,num2,find_GCD_of(num1,num2));
}