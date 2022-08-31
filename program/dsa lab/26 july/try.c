#include<stdio.h>
int main()
{
    int n,i,a,b,arr[5],count=0;
    printf("elements of array:\n");
    for(i=0;i<5;i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("first element ");
    scanf("%d",&a);
    printf("sec element ");
    scanf("%d",&b);
    for(i=0;i<5;i++)
    {
        if(a==arr[i]||b==arr[i])
        {
        count++;
        if(b==arr[i]){break;}
        else{count++;}
        }
    }
    printf("this %d",count);
}