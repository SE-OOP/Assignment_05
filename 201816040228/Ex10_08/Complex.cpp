#include <iostream>
#include "Complex.h"
using namespace std;

Complex::Complex( double realPart,double imaginaryPart)
 : real( realPart),imaginary( imaginaryPart)
{

}
Complex Complex::operator+( const Complex &operand2 ) const//执行加法运算
{//实部加实部，虚部加虚部
    return Complex(real + operand2.real,
       imaginary +operand2.imaginary);
}
Complex Complex::operator-( const Complex &operand2 ) const//执行减法运算
{//实部减去实部，虚部减去虚部
    return Complex(real - operand2.real,
       imaginary -operand2.imaginary);
}
Complex Complex::operator*( const Complex &operand2 ) const//乘法运算
{
    return Complex(real*operand2.real - imaginary*operand2.imaginary,
       real*operand2.imaginary +operand2.real*imaginary);
}
bool Complex::operator==( const Complex &operand2) const
{
    if(real==operand2.real&&imaginary==operand2.imaginary)
    {
        return true;// equal
    }
    else
    {
        return false;
    }
    return false;
}//结束


istream &operator>>( istream &input, Complex &a)
{
    input>>a.real;
    input >> a.imaginary;
   return input;
}
ostream &operator<<( ostream &output, const Complex &a)
{
    output<< "(" <<a.real<< "," <<a.imaginary <<")";
   return output;
}
