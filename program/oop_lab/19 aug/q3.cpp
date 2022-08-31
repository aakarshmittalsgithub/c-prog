#include <iostream>
using namespace std;
void disp(char x = '*', int n = 80) {
    for (int i = 0; i < n; i++) {
        cout << x;
    }
    cout << endl;
}
int main() {
    cout<<"1.Enter char and num\n2.Enter only char\n3.Enter nothing\n";
    int c;
    cin>>c;
    char ch;int n;
    switch(c)
    {
        case 1:
            cout<<"enter char ";
            cin>>ch;
            cout<<"enter the number of times: ";
            cin>>n;
            disp(ch,n);
            break;
        case 2:
            cout<<"enter char ";
            cin>>ch;
            disp(ch);
            break;

        case 3:
            disp();
            break;

        default:
            cout<<"wrong input";
    }
}