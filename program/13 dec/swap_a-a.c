#include <stdio.h>

int main()
{
    int a[4][4],temp= 0,i,j;
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            scanf("%d",&a[i][j]);
        }
    }printf("Original\n");
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("%d ",a[i][j]);
        }printf("\n");
    }
    for(i=1; i<4; i++){
        for(j=0; j<i; j++){
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
printf("\n");
    }
    printf("Transpose\n");
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("%d ",a[i][j]);
        }printf("\n");
    }
    return 0;
}