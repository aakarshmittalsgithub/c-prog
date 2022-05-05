#include<stdio.h>
struct Student
{
int roll;
char name[20];
float marks;
};
int main()
{ 
struct Student S={426,{'a','a','k','a','r','s','h'},9.0};
printf("Roll No.:%d\n",S.roll);
printf("Name:");
for(int i=0;i<7;i++)
printf("%c",S.name[i]);
printf("\n");
printf("CGPA:%f",S.marks);
return 0;
}
    
