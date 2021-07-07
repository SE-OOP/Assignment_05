#include <iostream>
#include <cstdlib>
using namespace std;

#include "Complex.h"



Complex::Complex(double realpart,double imaginarypart)

    :real(realpart),imaginary(imaginarypart)

{

   //empty body

}//end Complex constructor


Complex Complex::operator+(const Complex &operand) const
{
    return Complex(real+operand.real,imaginary+operand.imaginary);
}



Complex Complex::operator-(const Complex &operand) const
{
    return Complex(real-operand.real,imaginary-operand.imaginary);
}



Complex Complex::operator*(const Complex &operand) const
{
    return Complex(real*operand.real,imaginary*operand.imaginary);
}



bool Complex::operator==(const Complex &operand) const
{
    if(real!=operand.real||imaginary!=operand.imaginary)

        return false;

    return true;
}



ostream &operator<<(std::ostream &output,const Complex &a)
{
    output<<'('<<a.real<<','<<a.imaginary<<')';

    return output;
}

istream &operator>>(std::istream &input,Complex &a)
{
    input>>a.real>>a.imaginary;

    return input;
}
