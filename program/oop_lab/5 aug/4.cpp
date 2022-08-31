#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;

public:
    void input(void);
    void print(void);
};

void Complex::input(void) {
    cout<<"\nEnter real part: ";
    cin>>real;
    cout<<"Enter imaginary part: ";
    cin>>img;
}

void Complex::print(void){
    cout<<"Complex number: ";
    if(img>0)
        cout<<real<<"+ "<<img<<"i";
    else
        cout<<real<<img<<"i";
}
int main() {
    Complex com[10];
    for(int i=0;i<10;i++)
    {
        cout<<"Enter complex number "<<i+1<<": ";
        com[i].input();
    }
    cout<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<"Complex number "<<i+1<<": ";
        com[i].print();
        cout<<endl;
    }
}