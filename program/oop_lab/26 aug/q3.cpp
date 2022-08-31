#include<iostream>
using namespace std;
class num
{
    int a;
    int disp;
    int inp;
    public:
    void display()
    {
        disp++;
    }
    void input()
    {
        cin>>a;
        inp++;
    }
    void display_count()
    {
        cout<<"\ninput func is called:";
        cout<<inp;
        cout<<"\ndisp func is called:";
        cout<<disp;
    }
};
int main()
{
    static num a1;
    a1.input();
    a1.input();
    a1.display();
    a1.display();
    a1.display_count();
}
