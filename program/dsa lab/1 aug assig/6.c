#include <stdio.h>
int main()
{
    int row,c=1,b,i,j;
    printf("number of rows: ");
    scanf("%d",&row);
    for(i=0;i<row;i++)
    {
        for(b=1;b<=row-i;b++)
        printf("  ");
        for(j=0;j<=i;j++)
        {
            if (j==0||i==0)
                c=1;
            else
               c=c*(i-j+1)/j;
            printf("% 4d",c);
        }
        printf("\n");
    }
}