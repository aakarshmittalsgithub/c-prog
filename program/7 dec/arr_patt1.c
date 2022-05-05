#include <stdio.h>

int main()
{
    int i,j,k,a[3][3];
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(k=0;k<=2;k++){
    for(i=k;i>=0;i--){
        printf("%d ",a[i][k-i]);
    }printf("\n");
    }
    return 0;
}

