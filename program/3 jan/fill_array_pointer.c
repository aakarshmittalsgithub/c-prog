#include <stdio.h>

int main()
{
    int a[5],i;
    int*b=&a[0];
    scanf("%d",&*b);
    for(i=1;i<=4;i++){
        *(b+i)=a[0]+2*i;
    }
    for(i=0;i<=4;i++){
        printf("%d",a[i]);
        printf("\n");
    }
    return 0;
}