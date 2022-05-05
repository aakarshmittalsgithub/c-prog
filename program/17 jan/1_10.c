#include<stdio.h>
void func(int n)
{   
    if(n==11)
    {
    return;
    }
    printf("%d\n", n);
    func(n+1);
}
int main()
{
    int n=1;
    printf("\nNumbers from 1 To 10 are:\n");
    func(n);
    return 0;
} 