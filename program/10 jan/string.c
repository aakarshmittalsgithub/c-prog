#include <stdio.h>
void func(char b[])
{
    char *p=b;
    while(*p!='\0')
    {
        printf("%s \n",p);
        p++;
    }
}
int main()
{
    char a[10];
    scanf("%s",a);
    func(a);
    return 0;
}