#include<stdio.h>
int main()
{
    int a,b,i;
    long double ans=1.0;
    scanf("%d",&a);
    scanf("%d",&b);
    while(b!=0)
    {
    ans*=a;
    --b;
    }
    printf("%0.1Lf",ans);
    return 0;
}