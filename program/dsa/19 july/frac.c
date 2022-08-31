#include<stdio.h>
struct Fraction 
{
    int num,deno;
};
int main()
{
    struct Fraction f1,f2;
    f1.num=5;
    f1.deno=4;
    f2.num=3;
    f2.deno=2;
    float frac1=f1.num/f1.deno;
    float frac2=f2.num/f2.deno;
    printf("fraction 1 is %d/%d",f1.num,f1.deno);
    printf("\nfraction 2 is %d/%d",f2.num,f2.deno);
    if(frac1>frac2)
    printf("1");
    if(frac1<frac2)
    printf("-1");
    if(frac1=frac2)
    printf("\n0");        
}