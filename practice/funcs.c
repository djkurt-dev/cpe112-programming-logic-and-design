#include <stdio.h>
#include <stdlib.h>

int main() {
    char input_name[25];
    int input_age;

    printf("What's your name? ");
    gets(input_name);

    printf("How old are you? ");
    scanf("%d", &input_age);

    sayHi(input_name,input_age);

    return 0;
}
void tellAge(int age) {
    printf("You are %d years old.\n", age);
}
void sayHi(char name[50], int age) {
    printf("Hi you are %s!\n", name);
    tellAge(age);
}