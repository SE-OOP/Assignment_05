#include <iostream>
#include "Complex.h"
using namespace std;

Complex::Complex(double realPart,double imaginaryPart)

    :real(realPart),
     imaginary(imaginaryPart){}

Complex Complex::operator+(Complex &a) const
{
    return Complex(this->real +a.real,this->imaginary+a.imaginary);
}
Complex Complex::operator-(Complex &a) const
{
    return Complex(this->real-a.real,this->imaginary - a.imaginary);
}

Complex Complex::operator*(Complex &a) const
{
    return Complex( this->real*a.real - this->imaginary*a.imaginary, this->imaginary*a.real + this->real*a.imaginary);

}
bool Complex::operator==(Complex &a) const
{
    if(this->real == a.real && this->imaginary == a.imaginary)
        return true;
    else
        return false;
}
bool Complex::operator!=(Complex &a) const
{
   if(this->real == a.real && this->imaginary == a.imaginary)
        return false;
    else
        return true;
}
void Complex::print() const
{
    cout<<'('<< real <<"," <<imaginary<<')';
}
ostream &operator<<( ostream &output, const Complex & a)
{
    output<<'('<< a.real <<"," <<a.imaginary<<')';
    return output;
}
 istream &operator>>( istream &input, Complex &a)
 {
    input >> a.real;
    input >> a.imaginary;
    return input;
 }
