#include <iostream>
using namespace std;

class student
{
private :
    char name[50];
int roll;
int tot;

public :
    void input(void);
void print(void);
};

void student::input(void) {
    cout << "Enter name: " ;
    cin >> name;
    cout << "Enter roll number: ";
    cin >> roll;
    cout << "Enter total marks: ";
    cin >> tot;
}

void student ::print(void) {
    cout << "Student details:\n";
    cout << "\nName:"<< name << "\nRoll Number:" << roll << "\nTotal:" << tot;
}
int main() {
    student s;
    s.input();
    s.print();
}