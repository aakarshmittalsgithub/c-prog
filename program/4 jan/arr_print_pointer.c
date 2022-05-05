#include <stdio.h>

int main()
{
    int a[5]={1,2,3,4,5},i;
    for(i=0;i<=4;i++){
        int*b=a;
        printf("%d",*(b+i));
        printf("\n");
    }
    return 0;
}