#include<iostream>
using namespace std;
void volume(int r)
{
cout<<"volume of sphere is:";
int vol=4/3*3.14*r*r*r;
cout<<vol;
}
void volume(int h,int r)
{
cout<<"volume of cylinder is:";
int vol=3.14*r*r*h;
cout<<vol;
}
void volume(int l,int b,int h)
{
cout<<"volume of cylinder is:";
int vol=l*b*h;
cout<<vol;
}
int main()
{
    int radius1,radius2,height,len,brea;
    cout<<"\nfor volume of sphere";
    cout<<"\nenter radius:";
    cin>>radius1;
    volume(radius1);
    cout<<"\n\nfor volume of cylinder";
    cout<<"\nenter height:";
    cin>>height;
    cout<<"enter radius:";
    cin>>radius2;
    volume(radius2,height);
    cout<<"\n\nfor volume of cuboid";
    cout<<"\nenter length";
    cin>>len;
    cout<<"enter breadth";
    cin>>brea;
    cout<<"enter height";
    cin>>height;
    volume(len,brea,height);
}