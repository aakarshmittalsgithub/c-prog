#include <stdio.h>

int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}},i;
    int*b=&a[0][0];
    for(i=0;i<9;i++){
        printf("%d",*(b+i));
    }
    return 0;
}