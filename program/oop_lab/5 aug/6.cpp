#include<iostream>
using namespace std;
class Employee
{
    char name[50];
    int id;
    int age;
    float basic, da, hra, gross_salary;
public:
    void read(int count){
        cout<<"\nEnter Employee "<<count<<" Details";
        cout<<"\nEmployee ID: ";
        cin>>id;
        cout<<"Employee Name: ";
        cin>>name;
        cout<<"Basic Salary: ";
        cin>>basic;
    }
    float grosssal(){
        da = basic * 0.8;
        hra=basic*0.1;
        gross_salary = basic + da+hra;
        return gross_salary;
    }
    void display(int count){
        cout<<"\n*************************************************";
        cout<<"\nDisplaying the Details";
        cout<<"\nEmployee "<<count<<" Details\n";
        cout<<"\nEmployee ID	: "<<id;
        cout<<"\nEmployee Name	: "<<name;
        cout<<"\nGross Salary    : "<<gross_salary;
    }
};
int main(){
    int n;
    cout<<"Enter number of employees: ";
    cin>>n;
    Employee emp[n];
    for(int i=0; i< n; i++){
        emp[i].read(i+1);
    }
    for(int i=0; i < n; i++){
        emp[i].grosssal();
    }
    for(int i=0; i < n; i++){
        emp[i].display(i+1);
    }
    return 0;
}