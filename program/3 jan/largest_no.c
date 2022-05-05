#include <stdio.h>

int main()
{
int a,b,f,max,min;
int*c=&a;
int*d=&b;
int*e=&f;
scanf("%d\n",c);
scanf("%d\n",d);
scanf("%d",e);
max=(*c>*d)?(*c>*e?*c:*e):(*d>*e?*d:*e);
min=(*c<*d)?(*c<*e?*c:*e):(*d<*e?*d:*e);
printf("largest no. is=%d\n",max);
printf("smallest no. is=%d",min);
return 0;
}