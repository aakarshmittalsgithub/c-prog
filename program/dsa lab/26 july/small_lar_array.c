#include<stdio.h>
int main()
{
    printf("enter the array\n");
    int min,max,i,j,a[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    min=a[0][0];
    max=a[0][0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(min>=a[i][j])
            min=a[i][j];
        }
        for(j=0;j<3;j++)
        {
            if(max<=a[i][j])
            max=a[i][j];
        }
    }
    printf("smallest element is %d\n",min);
    printf("largest element is %d",max);
}