#include<stdio.h>
void func(int n)
{
    if(n)
        func(n-2);
    printf("%d\n", n);
}
int main()
{
    int n=10;
    printf("\nNumbers from 1 To 10 are:\n");
    func(n);
    return 0;
}