#include <stdio.h>

int main()
{
    /*****values*****/
    int i,j,k,n=2,a[5][5];
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("\n");

    /*****pattern_1*****/
    n=2;
    for(i=2;i>=0;i--){
    for(j=i;j<=n;j++){
            printf("%d ",a[i][j]);
        }printf("\n");
    n++;
    }

printf("\n");

    /*****pattern_2*****/
    n=2;
    for(i=2;i>=0;i--){
    for(j=i;j<=n;j++){
            printf("%d ",a[j][i]);
        }printf("\n");
    n++;
    }
printf("\n");

    /*****pattern_3*****/
    n=2;
    k=2;
    for(i=2;i<=4;i++){
    for(j=k;j<=n;j++){
            printf("%d ",a[i][j]);
        }printf("\n");
    n++;
    k--;
    }

printf("\n");

        /*****pattern_4*****/
    n=2;
    k=2;
    for(i=2;i<=4;i++){
    for(j=k;j<=n;j++){
            printf("%d ",a[j][i]);
        }printf("\n");
    n++;
    k--;
    }
    return 0;
}