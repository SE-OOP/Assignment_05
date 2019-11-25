//Ex10_08.cpp
//Complex class test program
#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
    Complex x;
    Complex y(4.3,8.2);
    Complex z(3.3,1.1);

    cout<<"x: "<<x<<endl;
    cout<<"y: "<<y<<endl;
    cout<<"z: "<<z<<endl;

    x=y+z;
    cout<<"x=y+z: "<<endl;
    cout<<x<<"="<<y<<"+"<<z<<endl<<endl;

    x=y-z;
    cout<<"x=y-z: "<<endl;
    cout<<x<<"="<<y<<"-"<<z<<endl<<endl;

    x=y*z;
    cout<<"x=y*z: "<<endl;
    cout<<x<<"="<<y<<"*"<<z<<endl<<endl;
}//end main
