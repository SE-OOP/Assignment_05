#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
    Complex x;//对象x
    Complex y(4.3, 8.2);//对象y
    Complex z(3.3, 1.1);//对象z

    if(y != z)//判断y,z是否相等
    {
        cout << "y and z are not equal  "<<endl;
    }
    if(y == z)
    {
        cout << "y and z are equal "<<endl;
    }

    cout << "x: ";
    cout << x;
    cout <<"\ny: ";
    cout << y;
    cout <<"\nz: ";
    cout <<z;

    x=y+z;//执行加法运算
    cout <<"\n\nx= y + z: "<<endl;
    cout << x << "=" << y << "+" << z;



    x=y-z;//执减法运算
    cout <<"\n\nx= y - z: "<<endl;
    cout << x << "=" << y << "-" << z;


    x=y*z;//执行乘法运算
    cout <<"\n\nx= y * z: "<<endl;
    cout << x << "=" << y << "*" << z;

}
