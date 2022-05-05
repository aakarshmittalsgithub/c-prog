#include <stdio.h>
 
void digit(int num)
{
    if(num/10==0)
    {
        printf("%d\n",num);
        return;
    }
    printf("%d\n",num%10);
    digit(num/10);
}
int main()
{
    int n;
    scanf("%d",&n);
    digit(n);
     return 0;
}
