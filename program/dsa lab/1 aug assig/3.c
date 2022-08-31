#include <stdio.h>

int main()
{
    int i,fn,sn,nn;
    fn=0;
    sn=1;
    nn=fn+sn;
    printf("%d,%d,",fn,sn);
    for(i=3;i<=10;i++){
        printf("%d,",nn);
        fn=sn;
        sn=nn;
        nn=fn+sn;
    }

    return 0;
}
