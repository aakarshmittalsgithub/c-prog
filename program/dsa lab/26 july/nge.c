#include<stdio.h>
int main()
{
    int i,a,arr[5],max,p;
    printf("elements of array:\n");
    for(i=0;i<5;i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("first element");
    scanf("%d",&a);
    for(i=0;i<5;i++)
    {
        if(a==arr[i])
        {
        p=arr[i];
        }
        if(arr[i]>p)
        {
        max=arr[i];
        break;
        }
    }
    printf("NGE:%d",max);
}