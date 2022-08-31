#include <iostream>
#include <cmath>

using namespace std;

class distance{
    int x1;
    int x2;
    int y1;
    int y2;
 
    int a;
    double res;

    public: 
    void entering_data(int X1,int X2,int Y1,int Y2){
        x1=X1;
        x2=X2;
        y1=Y1;
        y2=Y2;
        a = pow(x2-x1,2) + pow(y2-y1,2);
        res = sqrt(a);
    }
    void display(){
        cout<<endl<<endl << "Distance between the point (" << x1 <<"," <<y1 <<") and (" <<x2 << "," << y2 <<") is " << res<< " unit length" <<endl;
    }
};

int main(){
    class distance d1;
    int X1,X2,Y1,Y2;
    cout << "Enter X and Y coordinate of first point:    ";
    cin >> X1>>Y1;
    cout << "Enter X and y coordinate of second point:   ";
    cin >> X2>>Y2;
    
    d1.entering_data(X1,X2,Y1,Y2);
    d1.display();


    return 0;
}