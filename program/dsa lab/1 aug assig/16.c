#include<stdio.h>
int max(int a,int b,int c)
{
    if(a>b && a>c)
    return a;
    else if(b>a && b>c)
    return b;
    else
    return c;
}
int main()
{
    int n1,n2,n3;
    printf("enter the first no. ");
    scanf("%d",&n1);
    printf("enter the sec no. ");
    scanf("%d",&n2);
    printf("enter the third no. ");
    scanf("%d",&n2);
    printf("\nthe greatest no is %d",max(n1,n2,n3));
}