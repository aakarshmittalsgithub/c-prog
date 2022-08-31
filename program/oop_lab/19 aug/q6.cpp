#include<iostream>
using namespace std;
int val(int a)
{
return ++a;
}
int main()
{
    int a;
    cout<<"enter the number :";
    cin>>a;
    cout<<val(a);
}