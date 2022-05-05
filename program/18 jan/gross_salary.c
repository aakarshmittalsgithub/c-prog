#include <stdio.h>
typedef struct{
    int empid;
    char empname[50];
    float basic_salary;
}employee;
float gross_salary(employee*e1){
    scanf("%d",&(e1->empid));
    getchar();
    scanf("%[^\n]s",&(e1->empname));
    getchar();
    scanf("%f",&(e1->basic_salary));
    return 1.3*(e1->basic_salary);
}
int main()
{
    employee e1,e2,e3;
    float salary1=gross_salary(&e1);
    printf("%d %f\n",e1.empid,salary1);
    float salary2=gross_salary(&e2);
    printf("%d %f\n",e2.empid,salary2);
    float salary3=gross_salary(&e3);
    printf("%d %f\n",e3.empid,salary3);
    
}