#include <stdio.h>

int main()
{
    int n,b=0,i,j,k,a[3][3];
    for(i=0;i<=2;i++){
        for(j=0;j <=2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(k=2;k>=0;k--){
    for(j=k;j<=2;j++){
        printf("%d ",a[j-k][j]);
    }printf("\n");
    }
    return 0;
}