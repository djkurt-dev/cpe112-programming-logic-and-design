#include <stdio.h>
#include <string.h>

void main() {
    char str1[55], str2[55];
    int i, begin;
    printf("Input a string: ");
    gets(str1);
    //concatenating str1 to str2
    for(i=0; i<strlen(str1); i++){
        str2[i] = str1[i];
    }
    //concatenating the reverse of str1 to str2 with do-while loop
    i=strlen(str1)-2;
    begin=strlen(str1);
    do{
    	str2[begin] = str1[i];
        begin++;
        i--;
	}while (i>=0);
    printf("\nInput string str1=\"%s\"\n", str1);
    printf("then, palindrome str2=\"%s\"\n", str2);
}
