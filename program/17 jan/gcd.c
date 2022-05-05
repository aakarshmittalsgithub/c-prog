#include <stdio.h>

int gcd(int n1,int n2)
{
    if(n2==0)
    return n1;
    if(n1>n2)
    gcd(n2,n1%n2);
    else
    gcd(n1,n2%n1);
}
int main()
{   
    int n1,n2;
    scanf("%d",&n1);
    scanf("%d",&n2);
    printf("%d",gcd(n1,n2));
    return 0;
}
