#include<iostream>
using namespace std;
int sqr(int a)
{
    int sq=a*a;
    return sq;
}
int cube(int a)
{
    int cube=a*a*a;
    return cube;
}
int main()
{
    int a;
    cout<<"enter the number";
    cin>>a;
    cout<<"cube of the given number is: "<<cube(a);
    cout<<"\nsqr of the given number is: "<<sqr(a);
}