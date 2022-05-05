#include <stdio.h>
int main()
{
  char name[10],rev[10];
  int i,j,count=0;
  scanf("%s",name);
  while (name[count]!='\0'){
    count++;
  }
  j=count-1;
  for (i=0;i<count;i++){
    rev[i]=name[j];
    j--;
  }
  printf("%s",rev);
  return 0;
}