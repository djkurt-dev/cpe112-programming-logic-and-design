// Timajo, Kurt Vincent
// CpE - 1B
#include <stdio.h>

char* EquiGrade(int grade){
	if(grade >= 90){
		return "A!-Excellent";
	}
	else if(grade < 90 && grade >= 75){
		return "B!-Good";
	}
	else{
		return "C!-Poor";
	}
}
void main(){
	int student_grade;	
	printf("Input grade: ");
	scanf("%d", &student_grade);
	char* equivalent = EquiGrade(student_grade);
	printf("%s", equivalent);
}