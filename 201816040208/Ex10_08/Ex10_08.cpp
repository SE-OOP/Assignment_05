#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
    Complex x;
    Complex y(4.3, 8.2);
    Complex z(3.3, 1.1);

    cout << "x: ";
    cout << x;
    cout << "\ny: ";
    cout << y;
    cout << "\nz: ";
    cout << z;

    if(y == z)
        cout << "\n\ny is the same as z";
    else if(y != z)
        cout << "\n\ny is not the same as z";

    x = y + z;
    cout << "\n\nx = y + z:" << endl;
    cout << x;
    cout << " = ";
    cout << y;
    cout << " + ";
    cout << z;

    x = y - z;
    cout << "\n\nx = y - z:" << endl;
    cout << x;
    cout << " = ";
    cout << y;
    cout << " - ";
    cout << z;

    x = y * z;
    cout << "\n\nx = y * z:" << endl;
    cout << x;
    cout << " = ";
    cout << y;
    cout << " + ";
    cout << z;

    cout << "\n\nplease enter the real and imaginary of x\n";
    cin >> x;
    cout << "x: ";
    cout << x;

    cout << endl;
}






