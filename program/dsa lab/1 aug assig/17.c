#include<stdio.h>
int min_max(int a,int b,int c,int j)
{   
    if(j==0)
{
    if(a>b && a>c)
    return a;
    else if(b>a && b>c)
    return b;
    else
    return c;
}
    if(j==1)
{
    if(a<b && a<c)
    return a;
    else if(b<a && b<c)
    return b;
    else
    return c;
}
}
int main()
{
    int i,n1,n2,n3;
    printf("enter the first no. ");
    scanf("%d",&n1);
    printf("enter the sec no. ");
    scanf("%d",&n2);
    printf("enter the third no. ");
    scanf("%d",&n2);
    for(i=0;i<2;i++)
    {
    //min_max(n1,n2,n3,i);
    if(i==0)
    printf("\nthe greatest no is %d",min_max(n1,n2,n3,i));
    if(i==1)
    printf("\nthe smallest no is %d",min_max(n1,n2,n3,i));
    }
}