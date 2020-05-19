#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
    Complex x;
    Complex y(2.2,1.1);
    Complex z(3.3,1.1);
    cout << "x: ";
    cout <<x;
    cout << "\ny: ";
    cout <<y;
    cout << "\nz: ";
    cout <<z;
    x=y+z;
    cout<<"\n\nx=y+z:"<<endl;
    cout <<x;
    cout<<" = ";
    cout <<y;
    cout<<" + ";
    cout <<z;
    x=y-z;
    cout<<"\n\nx=y-z:"<<endl;
    cout <<x;
    cout<<" = ";
    cout <<y;
    cout <<z;
    x=y*z;
    cout << "\n\nx = y * z:" << endl;
    cout << x<<";"<< " = ";
    cout << y;
    cout << " + ";
    cout << z;
    cin >> x;
    cout << "x: ";
    cout << x;
    return 0;
}
