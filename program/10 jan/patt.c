#include<stdio.h>
void patt(int a,char b)
{   
    int i,j;
    for(i=0;i<=a;i++){
        for(j=0;j<=a-i;j++){
            printf("%c",b);
        }printf("\n");
    }
}
int main()
{
    int a;
    char b;
    printf("input +,=,*,#,$\n");
    scanf("%c",&b);
    printf("no of rows");
    scanf("%d",&a);
    patt(a,b);
    return 0;
}