#include <stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int*b=&a[2];
    printf("%d",*b);
    return 0;
}