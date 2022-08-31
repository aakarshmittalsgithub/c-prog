#include<iostream>
using namespace std;
class second;
class first
{
int fir;
public:
void display()
{
    cout<<"fir val after swap: ";
    cout<<fir;
}
void input()
{
    cout<<"enter the fir val: ";
    cin>>fir;
}
int * afir=&fir;
friend void swap(first,second);
};

class second
{
int sec;
public:
void input()
{
    cout<<"enter the sec val: ";
    cin>>sec;
}
void display()
{
    cout<<"\nsec val after swap: ";
    cout<<sec;
}
friend void swap(first,second);
int *asec=&sec;
};
void swap(first &f,second &s)
{
    int *temp;
    temp=f.afir;
    f.afir=s.asec;
    s.asec=temp;
}
int main() 
{
    first f;
    second s;
    f.input();
    s.input();
    swap(f.afir,s.asec);
    f.display();
    s.display();
    return 0;
}
