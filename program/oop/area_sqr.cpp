#include<iostream>
using namespace std;
class fun {
    public:
        void display(char c = '*', int n = 80) {
            for (int i = 0;i<n;i++) {
                cout << c;
            }
            cout << endl;
        }
};

int main() {
    fun a;
    a.display();
    a.display('#', 30);
    a.display('#');
}