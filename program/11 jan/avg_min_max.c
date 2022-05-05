#include<stdio.h>
int max(int *a,int *b){
    int maxv;
    maxv=*a>*b?*a:*b;
    return maxv;
}
int min(int *a,int *b){
    int minv;
    minv=*a<*b?*a:*b;
    return minv;
}
float avg(int *a,int *b){
    float avgv;
    avgv=(*a+*b)/2.0;
    return avgv;
}
int main()
{
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    printf("%d",max(&n,&m));
    printf("\n");
    printf("%d",min(&n,&m));
    printf("\n");
    printf("%f",avg(&n,&m));
    return 0;
}