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
for(i=0;i<2;i++){
//a
    for(j=0;j<=1;j++){
        a[i][j]=e[i][j];
    }
//b
    for(j=2;j<=3;j++){
        b[i][j]=e[i][j];

}
for(i=2;i<4;i++){
//c
    for(j=0;j<=1;j++){
        c[i][j]=e[i][j];
    }
//d
    for(j=2;j<=3;j++){
        d[i][j]=e[i][j];
    }
}
for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        printf("%d ",e[i][j]);
    }printf("\n");
}
}
return 0;
}