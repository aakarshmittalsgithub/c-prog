#include <stdio.h>
int main()
{
int n,rev,sum=0,m=0;
printf("Enter the prime number");
scanf("%d",&n);
while(n!=0)
    {
        rev=n%10;
        sum=sum*10+rev;
        n=n/10;
    }
    for(int j=2;j<=sum/2;j++)
    {
        if((sum%j)==0)
        {
            m++;
            break;
        }
    }
    if(m==0)
        printf("Twisted Prime");
     else
        printf("Not Twisted Prime");
}