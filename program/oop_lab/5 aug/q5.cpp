#include <iostream>
using namespace std;

class distance{
    public:
    
    int ft;
    int inch;
    void entering_data(int ft,int inch){

    }
    void display(){
        cout << "Sum of two distance is " << ft << " feet and " << inch << " inches" <<endl;
        cout << ft <<"." << inch <<endl;
    }
};

int main(){
    class distance s1;
    class distance s2;
    class distance s3;

    int ft,inch;

    cout << "Enter data for 1st measurement.  " <<endl;
    cout << "Enter feet value:  ";
    cin >> s1.ft;
    cout << "Enter inch value:   ";
    cin >> s1.inch;
    
    cout << "Enter data for 2nd measurement.  " <<endl;
    cout << "Enter feet value:  ";
    cin >> s2.ft;
    cout << "Enter inch value:   ";
    cin >> s2.inch;
    
    s3.inch = s1.inch + s2.inch;
    s3.ft = s1.ft +  s2.ft;
    if (s3.inch >12)
    {
        s3.inch = s3.inch -12;
        s3.ft = s3.ft+1;
    }
    else if (s3.inch = 12)
    {
        s3.inch =0;
        s3.ft = s3.ft+1;
    }
    
    s3.display();

    return 0;
}