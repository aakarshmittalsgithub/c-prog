#include<stdio.h>
int fac(int a)
{
    int prod=1,j;
    for(j=1;j<=a;j++){
        prod=prod*j;
    }
        return prod;
}
int main()
{
    int i,n;
    float sum=0,sum1=0;
    scanf("%d",&n);
        for(i=1;i<=n;i++){    
        if (i%2!=0)
        sum1=sum+1.0/fac(i);
        else
        sum=sum+fac(i);
    }
    printf("%f",sum+sum1);
}