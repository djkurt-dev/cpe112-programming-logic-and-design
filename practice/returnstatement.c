#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//functions with return value should be placed before the main function.
int max(int num1, int num2, int num3){
    int result;
    if(num1 >= num2 && num1 >= num3){
        result = num1;
    }
    else if(num2 >= num3 && num2 >= num1){
        result = num2;
    }
    else
    {
        result = num3;
    }    
    
    return result;
}

double cube(double num) {
    double result = pow(num,3);
    return result;
}

int main() {
    printf("Cube: %.1lf", cube(15));
    printf("\nMax is %d", max(126,225,225));
}