#include <stdio.h>

int main()
{
    int a,b,temp1,temp2;
    a=5;
    b=6;
    int*c=&a;
    int*d=&b;
    temp1=*d;
    *d=*c;
    *c=temp1;
    printf("a=%d\n",a);
    printf("b=%d",b);
return 0;
}
