#include<stdio.h>
int main()
{
    int i,a[5],temp;
    for(i=1;i<=5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=5;i++)
    {
        if(i%2!=0)
        {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
        }
    }
    for(i=1;i<=5;i++)
    {
        printf("%d",a[i]);
    }
}