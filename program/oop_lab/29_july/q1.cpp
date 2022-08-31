#include <iostream>
using namespace std;
struct Student
{
    int roll;
    int sem;
    char name[20];
    float sub[5];
    float avg;
}S;
int main()
{
    struct Student S;
    cout<<"Name of the students";
    cin>>S.name;
    cout<<"roll no :";
    cin>>S.roll;
    cout<<"semester no. :";
    cin>>S.sem;
    for(int i=1;i<=5;i++)
    {
        if(i==1)
        {
            cout<<"subject1 Marks:";
            cin>>S.sub[i];
        }
        if(i==2)
        {
            cout<<"subject2 Marks:";
            cin>>S.sub[i];
        }
        if(i==3)
        {
            cout<<"subject3 Marks:";
            cin>>S.sub[i];
        }
        if(i==4)
        {
            cout<<"subject4 Marks:";
            cin>>S.sub[i];
        }
        if(i==5)
        {
            cout<<"subject5 Marks:";
            cin>>S.sub[i];
        }
    }
    cout<<"\nDisplaying";
    cout<<"\n**************************************************\n";
    cout<<"Name of the student is :"<<S.name<<endl;
    cout<<"Entered Roll No.:"<<S.roll<<endl;
    cout<<"Entered Semester:"<<S.sem<<endl;
    cout<<"Entered Marks is:"<<endl;
    for(int i=1;i<=5;i++)
    {
    cout<<"sub"<<i<<":"<<S.sub[i]<<endl;
    //cout<<S.sub[i];
    cout<<"\n";
    }  
    return 0;
}