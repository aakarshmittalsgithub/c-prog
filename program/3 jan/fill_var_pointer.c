#include <stdio.h>

int main()
{
int a,b;
int*c=&a;
int*d=&b;
scanf("%d\n",c);
scanf("%d",d);
printf("a=%d\nb=%d",*c,*d);
return 0;
}