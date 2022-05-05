#include<stdio.h>
void first(int n1,int m1)
{   
    int i,j;
    for(i=0;i<n1;i++){
        for(j=0;j<m1;j++){
            printf("- ");
        }printf("\n");
    }
}
void sec(int n2,int m2)
{   
    int i,j;
    for(i=0;i<n2;i++){
        for(j=0;j<m2;j++){
            printf("= ");
        }printf("\n");
    }
}
void third(int n3,int m3)
{   
    int i,j;
    for(i=0;i<n3;i++){
        for(j=0;j<m3;j++){
            printf("* ");
        }printf("\n");
    }
}
int main()
{   
    int n1,n2,m1,m2,m3,n3;
    printf("for (-)\n");
    printf("columns");
    scanf("%d",&n1);
    printf("rows");
    scanf("%d",&m1);
    /**********************/
    printf("for (=)\n");
    printf("columns");
    scanf("%d",&n2);
    printf("rows");
    scanf("%d",&m2);
    /**********************/
    printf("for (*)\n");
    printf("columns");
    scanf("%d",&n3);
    printf("rows");
    scanf("%d",&m3);
    /**********************/
    printf("\n");
    first(n1,m1);
    printf("AB\n");
    sec(n2,m2);
    printf("DF\n");
    third(n3,m3);
    return 0;
}