#include<stdio.h>
int main()
{
    int a1[5],a2[5],a3[10],i,j;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a1[i]);
        a3[i]=a2[i];
    }
    printf("******************\n");
    for(j=0;j<5;j++)
    {
        scanf("%d",&a2[j]);
        a3[i]=a2[j];
        i++;
    }
    printf("******************\n");
    for(i=0;i<5;i++)
    {
        printf("%d",a3[i]);
    }
}