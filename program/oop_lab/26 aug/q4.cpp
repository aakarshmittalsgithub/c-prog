#include <iostream>
using namespace std;

class student
{
private :
    char name[50];
    int roll;
    int tot=0;
    int marks[5];
    double per;
    int m;
public :
    void input(void);
    void print(void);
};

void student::input(void) {
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter roll number: ";
    cin >> roll;
    cout << "Enter total marks of exam: ";
    cin >> m;
    for (int i = 0; i < 5; i++) {
        cout << "Enter marks in subject " << i + 1 << ": ";
        cin >> marks[i];
        tot = tot + marks[i];
    }
    per = (tot*100)/(m*5);
}
void student ::print(void) {
    cout << "Student details:\n";
    cout << "\nName:"<< name << "\nRoll Number:" << roll << "\nTotal: " << tot<<"\nPercentage: "<<per;
}
int main() {
    student s;
    s.input();
    s.print();
}