// Timajo, Kurt Vincent
// CpE - 1B
#include <stdio.h>

void even(int num){
	if(num % 2 == 0){
		printf("%d is even.\n", num);
	} else {
		printf("%d is odd.\n", num);
	}
}

void main(){
	int i, inputNum[5];
	printf("Input 5 integers: (separate by space) \n");
	scanf("%d %d %d %d %d", &inputNum[0], &inputNum[1],&inputNum[2],&inputNum[3],&inputNum[4]);
	printf("\n");
	for(i=0; i<5;i++){		
		even(inputNum[i]);
	}
}