#include <stdio.h>
#include <math.h>
int main()
{
  int i,n,count;
  printf("Enter an integer:");
  scanf("%d",&n);
  count=(log10(n)+1);
  printf("No of digits are : %d",count);
}