#include <stdio.h>

int main()
{
    int i;
    char a[20];
    char*b=&a[0];
    char*c=&a[5];
    char*d=&a[10];
    char*e=&a[15];
    for(i=0;i<=4;i++){
        scanf("%s",(b+i));
    }
    for(i=0;i<=4;i++){
        scanf("%s",(c+i));
    }
    for(i=0;i<=4;i++){
        scanf("%s",(d+i));
    }
    for(i=0;i<=4;i++){
        scanf("%s",(e+i));
    }
    for(i=0;i<20;i++){
    printf("%c",a[i]);
    }
    return 0;
}