#include<stdio.h>
int main()
{
    int i,a[5],b,count=0;
    printf("assign:\n");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    printf("no to find\n");
    scanf("%d",&b);
    for(i=0;i<5;i++)
    {
        if(a[i]==b)
        count++;  
    }
    printf("\nno. entered occured %d times",count);
}