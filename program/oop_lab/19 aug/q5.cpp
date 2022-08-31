#include<iostream>
using namespace std; 
void swap(int*x,int*y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
    cout<<"x=";
    cout<<*x;
    cout<<"\ny=";
    cout<<*y;
}
int main()
{
    int x=10,y=20;
    swap(&x,&y);
    return 0;
}