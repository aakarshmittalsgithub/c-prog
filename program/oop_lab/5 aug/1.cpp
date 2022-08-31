#include <iostream>
using namespace std;
class name{
    public:
    string Name;
    void input(string name ){
        Name = name;
    }
    void display(){
        cout << " hello " << Name <<endl;
    }
};

int main(){
    class name n1;
    string name;
    cout << "Enter your name:   ";
    cin >> name;
    n1.input(name);
    n1.display();
    return 0;
}