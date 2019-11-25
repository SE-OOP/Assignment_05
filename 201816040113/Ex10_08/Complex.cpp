//Complex.cpp
#include <iostream>
#include "Complex.h"
using namespace std;

Complex::Complex(double realPart,double imaginaryPart)
:real(realPart),imaginary(imaginaryPart)
{
    //empty body
}//end Complex constructor

//addition operator
Complex Complex::operator+(const Complex &operand2)const
{
    return Complex(real+operand2.real,imaginary+operand2.imaginary);
}//end function operator+

//subtraction operator
Complex Complex::operator-(const Complex &operand2)const
{
    return Complex(real-operand2.real,imaginary-operand2.imaginary);
}//end function operator-

//multiplication operator
Complex Complex::operator*(const Complex &operand2)const
{
    return Complex( real*operand2.real-imaginary*operand2.imaginary , imaginary*operand2.real+real*operand2.imaginary );
}//end function operator*

//determine if two imaginary number is equal and return true
//otherwise return false
bool Complex::operator==(const Complex &operand2)const
{
    if(real==operand2.real&&imaginary==operand2.imaginary)
    {
        return true;
    }
    return false;
}

//overload input operator for class complex
istream &operator>>(istream &input, Complex &a)
{
    input>>a.real>>a.imaginary;
    return input;
}//end function

//overload output operator for class complex
ostream &operator<<(ostream &output, const Complex &a)
{
    output<<"( "<<a.real<<" , "<<a.imaginary<<" )";
    return output;
}//end function
