#include<stdio.h>
int main()
{
    int n1,n2,max;
    printf("enter the first no.");
    scanf("%d",&n1);
    printf("enter the sec no.",&n2);
    scanf("%d",&n2);
    max=(n1>n2)?n1:n2;
    printf("\ngreater no. is %d",max);
}