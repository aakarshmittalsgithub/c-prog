#include<stdio.h>
void fibonacci(int r)
{
   int a=0,b=1,c;
   while (a<=r){
    printf("%d",a);
    c=a+b;
    a=b;
    b=c;
   }
}
int main()
{
   int range;
   scanf("%d",&range);
   printf("The fibonacci series is: \n");
   fibonacci(range);
   return 0;
}