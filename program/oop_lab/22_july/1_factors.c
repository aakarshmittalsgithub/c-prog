#include<math.h>
#include<stdio.h>
int main()
{
    int dis,a,b,c,root1,root2;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    printf("\nthe equation is %dx^2+%dx+%d\n",a,b,c);
    dis=b*b-4*a*c;
    root1=((-b+(sqrt(dis)))/2*a);
    root2=((-b-(sqrt(dis)))/2*a);
    printf("\nroot 1: %d\n",root1);
    printf("root 2: %d\n",root2);
    if(dis==0)
    printf("real and equal");
    if(dis>0)
    printf("real and diff");
    if(dis<0)
    printf("not real");
    }