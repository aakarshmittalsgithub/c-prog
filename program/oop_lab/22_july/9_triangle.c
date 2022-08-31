#include<stdio.h>
int main()
{
int first,sec,third;
printf("enter the first side");
scanf("%d",&first);
printf("\nenter the sec side");
scanf("%d",&sec);
printf("\nenter the third side");
scanf("%d",&third);
if((first+sec>third)&&(first+third>sec)&&(third+sec>first))
    printf("\nthe trainge is feasible");
else
    printf("the trainge is not feasible");

}