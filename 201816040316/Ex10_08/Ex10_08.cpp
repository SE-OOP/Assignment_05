#include<iostream>
using namespace std;
#include"Complex.h"

int main()
{
    Complex x;
    Complex y(4.3, 8.2);
    Complex z(3.3, 1.1);
    
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;
    
    cout<<"\n\n x = y + z:"<<endl;
    cout<<x<<"="<<y<<"+"<<z<<endl;
    cout<<"\n\n x = y - z:"<<endl;
    cout<<x<<"="<<y<<"-"<<z<<endl;
    cout<<"\n\n x = y * z:"<<endl;
    cout<<x<<"+"<<y<<"*"<<z<<endl;
    cout<<"\n\n"<<y<<"is"<<endl;
    cout<<( ( y == z ) ? "  == " : "  != " );
    cout<<z<<endl;
    
