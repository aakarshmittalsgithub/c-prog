#include <stdio.h>

int main()
{
    /*****values*****/
    int i,j,a[2][2],b[2][2],c[3][3],d[2][2],e[4][4];
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%d",&e[i][j]);
        }
    }
    //original
for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        printf("%d",e[i][j]);
    }
}
return 0;
}