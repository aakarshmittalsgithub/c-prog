#include<stdio.h>
void pos(int a[],int *p)
{   
    int i,new_array[5];
    for(i=0;i<5;i++){
        new_array[i]=a[i]+*p;
        printf("%d ",new_array[i]);
    }
}
int main()
{
    int a[5]={1,4,5,6,4},b;
    //printf("\n");
    scanf("%d",&b);
    printf("\n");
    int*p=&a[b-1];
    pos(a,&a[b-1]);
    //printf("%d",*p);
    return 0;
}