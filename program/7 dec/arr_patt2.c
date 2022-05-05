#include <stdio.h>

int main()
{
    int i,j,n,a[5][5],c;
    n=5;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d",&a[i][j]);
        }
    } 
    for(i=0;i<=n/2;i++){
        for(j=(n/2)-1;j<=(2*i)+1;j++){
            printf("%d",a[i][j]);
        }printf("\n");
        
    }
    
    return 0;
}