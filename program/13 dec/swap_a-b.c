#include <stdio.h>

int main()
{
    /*****values*****/
    int i,j,a[3][3],b[3][3],c[3][3];
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            printf("%d ",a[i][j]);
        }printf("\n");  
    }
printf("\n");

    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            b[i][j]=a[j][i];
            printf("%d ",b[i][j]);
        }printf("\n");
    }
    return 0;
}