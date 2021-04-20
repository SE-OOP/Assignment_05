#include <iostream>
#include "Complex.h"
using namespace std;

Complex::Complex(double realPart,double imaginaryPart)
:real(realPart),imaginary(imaginaryPart)
{

}

Complex Complex::operator+(const Complex &operand2)const
{
    return Complex(real+operand2.real,imaginary+operand2.imaginary);
}

Complex Complex::operator-(const Complex &operand2)const
{
    return Complex(real-operand2.real,imaginary-operand2.imaginary);
}
Complex Complex::operator*(const Complex &operand2)const
{
    return Complex(real*operand2.real-imaginary*operand2.imaginary,imaginary*operand2.real+real*operand2.imaginary);
}


istream &operator>>(istream &input,Complex &operand)
{
    cout<<"输入复数的实部和虚部: "<<endl;
    input>>operand.real>>operand.imaginary;
    return input;
}

ostream &operator<<(ostream &output,Complex &operand)
{
    output<<"("<<operand.real<<","<<operand.imaginary<<")";
    return output;
}

bool Complex::operator==(Complex &right )
{
    if(real==right.real&&imaginary==right.imaginary)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Complex::operator!=(Complex &right )
{
    if(real==right.real&&imaginary==right.imaginary)
    {
        return false;
    }
    else
    {
        return true;
    }
}
