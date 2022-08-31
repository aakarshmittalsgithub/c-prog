#include <iostream>
using namespace std;
class second;
class first
{
    int value1;

public:
    void indata(int a)
    {
        value1 = a;
    }
    void display(void)
    {
        cout << value1 << "\n";
    }
    friend void exchange(first &, second &);
};
class second
{
    int value2;

public:
    void indata(int a)
    {
        value2 = a;
    }
    void display()
    {
        cout << value2 << "\n";
    }
    friend void exchange(first &, second &);
};
void exchange(first &x, second &y)
{
    int temp = x.value1;
    x.value1 = y.value2;
    y.value2 = temp;
}
int main()
{
    first C1;
    second C2;
    C1.indata(100);
    C2.indata(200);
    cout << "\nValues before exchange\n";
    C1.display();
    C2.display();
    exchange(C1, C2);
    cout << "\nValues after exchange\n";
    C1.display();
    C2.display();
    return 0;
}