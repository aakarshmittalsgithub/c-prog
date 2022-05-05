#include <stdio.h>
int main()
{
  char name[10], rev[10];
  int i,j,count=0;
  scanf("%s",name);
  while (name[count]!='\0'){
    count++;
  }
  printf("%d",count);
  return 0;
}
