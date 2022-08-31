#include<stdio.h>
int main()
{
    int n1,n2,n3,max;
    printf("enter the first no.");
    scanf("%d",&n1);
    printf("enter the sec no.",&n2);
    scanf("%d",&n2);
    printf("enter the third no.",&n3);
    scanf("%d",&n3);
    if((n1>n2)&&(n1>n3))
    max=n1;
    if((n2>n3)&&(n2>n1))
    max=n2;
    else
    max=n3;
    printf("\ngreater no. is %d",max);
}