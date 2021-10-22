#include <stdio.h>
#include <stdlib.h>

void main() {
    int x=1, n;
    float monthly_salary, bonus;
    char employee_name[25],ch;
    printf("---------------- DEI Company Year-End Bonus for Employees ----------------");
    printf("\n\nEnter number of employees: ");
    scanf("%d", &n);

    for(x; x <= n; x++) {
        printf("Enter Employee Name: ");
        ch=getchar(); //unintended enter characters
        gets(employee_name);

        printf("Monthly Salary: ");
        scanf("%f", &monthly_salary);
        
        if(monthly_salary <= 20000){
            bonus = monthly_salary * .75;
            printf("\n%s\nBonus: P %.2f\n\n", employee_name, bonus);
        }
        else if(monthly_salary > 20000){
            bonus = monthly_salary * .50;
            printf("\n%s\nBonus: P %.2f\n\n", employee_name, bonus);
        }
        else {
            printf("Invalid.");
        }
    }
}