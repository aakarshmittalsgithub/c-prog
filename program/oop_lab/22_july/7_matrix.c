#include<stdio.h>
int main()
{
    printf("enter the array\n");
    int i,j,a[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("transpose\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",a[j][i]);
        }printf("\n");
    }
    return 0;
}