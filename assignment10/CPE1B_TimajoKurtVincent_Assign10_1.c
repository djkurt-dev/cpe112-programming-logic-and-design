// Timajo, Kurt Vincent
// CpE - 1B
#include <stdio.h>


int _inputNumber(){
	int n;
	printf("Input N: ");
	scanf("%d", &n);
	return n;
}

void printSquare(int base, int squared){
	printf("The square of %d is %d.\n", base, squared);
}

int square(int toSquare) {
	int baseNum, square;
	for(baseNum=1; baseNum<=toSquare; baseNum++){
		square = (baseNum*baseNum);
		printSquare(baseNum, square);
	}
}
void main(){
	int inputNum;
	inputNum = _inputNumber();
	square(inputNum);
}