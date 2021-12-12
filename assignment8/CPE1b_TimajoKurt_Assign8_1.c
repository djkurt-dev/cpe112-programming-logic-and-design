#include <stdio.h>
#include <string.h>

void main() {
    char str1[100], str2[100], str3[100]="", *p;
    int i, letter, str1_len, str2_len, str3_len;
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    //length of str1
    for(i=0, str1_len=0; str1[i] != '\0'; i++) {
        str1_len++;
    }
    //length of str2
	for(i=0, str2_len=0; str2[i] != '\0'; i++) {
       str2_len++;
   	}
    //concatenating str1 and str2
    for(i=0; i<str1_len; i++){
        str3[i] = str1[i];
    }
    for(i=0, letter=str1_len; *(str2+i) != '\0'; i++,letter++) {
        str3[letter] = *(str2+i);
    }      
    //length of str3
    p = str3;
    while(*p != '\0') {
        str3_len++;
        p++;
    }
    printf("\nInput strings str1=\"%s\" and str2=\"%s\"\nthen,\n", str1, str2);
    printf("\tstr3=\"%s\"\n", str3);
    printf("\tLength of str1 = %d\n", str1_len);
    printf("\tLength of str2 = %d\n", str2_len);
    printf("\tLength of str3 = %d\n", str3_len);
    
}
