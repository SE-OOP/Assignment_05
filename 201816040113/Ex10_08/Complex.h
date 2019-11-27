//Complex.h
////Complex class definition
#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED
#include <iostream>
using namespace std;

class Complex
{
    friend ostream &operator<<( ostream &,const Complex & );
    friend istream &operator>>( istream &,Complex & );

public:
    explicit Complex(double=0.0, double=0.0);//constructor
    Complex operator+(const Complex & )const;//addition
    Complex operator-(const Complex & )const;//subtraction
    Complex operator*(const Complex & )const;//multiplication
    bool operator==(const Complex & )const;//equality operator
    bool operator!=(const Complex &operand2 )
    {
        return !(*this == operand2);//invokes Complex::operator==
    }//end function operator !=

private:
    double real,imaginary;//real part and imaginary part
};//end class Complex

#endif // COMPLEX_H_INCLUDED
