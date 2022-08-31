#include<stdio.h>
int main()
{
    int num,count=0;
    int i,a[5];
    printf("assign:\n");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    printf("\nenter the no. to find the occurance of");
    scanf("%d",&num);
    for (i=0;i<5;i++)
    {
        if(a[i]==num)
        {count++;}
    }
    printf("%d",count);
}