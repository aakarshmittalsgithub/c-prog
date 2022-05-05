#include <stdio.h>

int main()
{
    int a[8]={4,5,3,7,2,8,5,8},i,temp;
    int*b=a;
    int*c=&a[4];
    for(i=0;i<4;i++){
        temp=*(c+i);
        *(c+i)=*(b+i);
        *(b+i)=temp;
    }
        for(i=0;i<8;i++){
        printf("%d",a[i]);
        }
    return 0;
}