#include<iostream>
using namespace std;
void area(int a)
{
    int ar;
    ar=3.14*a*a;
    cout<<"\nArea";
    cout<<ar;
}
void area(int a,int b)
{
    int ar=a*b;
    cout<<"\nArea";
    cout<<ar;
}
void area(double a,double b)
{
    float ar=0.5*(a*b);
    cout<<"\nArea: ";
    cout<<ar;
}
int main()
{   int l,b,r;
    double h,base;
    cout<<"\nFor area of rectange";
    cout<<"\nenter the length:";
    cin>>l;
    cout<<"enter the breadth:";
    cin>>b;
    area(l,b);
    cout<<"\nFor area of cicle";
    cout<<"\nenter the radius:";
    cin>>r;
    area(r);
    cout<<"\nFor area of triange";
    cout<<"\nenter the base:";
    cin>>base;
    cout<<"enter the height:";
    cin>>h;
    area(base,h);
};