#include<stdio.h>
void add(int a,int b)
{   
    int sum;
    sum=a+b;
    printf("%d",sum);
}
void multi(int a,int b)
{   
    int prod;
    prod=a*b;
    printf("%d",prod);
}
int main()
{   
    int a,b;
    char n;
    printf("select + 0r *:");
     scanf("%c",&n);
     printf("first no:");
     scanf("%d",&a);
     printf("sec no:");
     scanf("%d",&b);
     if(n=='*'){
    multi(a,b);
     }
    else{
    add(a,b);
    }
    return 0;
}
     