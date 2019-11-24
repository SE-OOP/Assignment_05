// Lab 4: Complex.cpp
// Member-function definitions for class Complex.
#include <iostream>
using namespace std;

#include "Complex.h"

Complex::Complex( double real, double imaginary )
{
   setComplexNumber( real, imaginary );
} // end Complex constructor

Complex Complex::operator+( const Complex &b)
{
   Complex a;
   a.realPart=this->realPart+b.realPart;
   a.imaginaryPart=this->imaginaryPart+b.imaginaryPart;
   return a;
} // end function add

Complex Complex::operator-( const Complex &b)
{
   Complex a;
   a.realPart=this->realPart-b.realPart;
   a.imaginaryPart=this->imaginaryPart-b.imaginaryPart;
   return a;
} // end function subtract
Complex Complex::operator*( const Complex &b)
{
   Complex a;
   a.realPart=this->realPart*b.realPart;
   a.imaginaryPart=this->imaginaryPart*b.imaginaryPart;
   return a;
} // end function subtract
void Complex::printComplex()
{
   cout << '(' << realPart << ", " << imaginaryPart << ')';
} // end function printComplex
bool Complex::operator==(const Complex &right)const
{

    if((this->realPart==right.realPart)&&(this->imaginaryPart==right.imaginaryPart))
            return 1;
    else
            return 0;
}
void Complex::setComplexNumber( double rp, double ip )
{
   realPart = rp;
   imaginaryPart = ip;
} // end function setComplexNumber
istream &operator>>(istream &input,Complex &a)
{
    input>>a.realPart;
    input>>a.imaginaryPart;
    return input;
}
ostream &operator<<(ostream &output,const Complex &a)
{
    output<<"("<<a.realPart<<","<<a.imaginaryPart<<")"<<endl;
    return output;
}
