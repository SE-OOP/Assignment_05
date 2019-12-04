#include <iostream>
#include "Complex.h"
using namespace std;

Complex::Complex(double realPart, double imaginaryPart )
    :real(realPart), imaginary(imaginaryPart)
{

}

Complex Complex::operator+(const Complex &operand2) const
{
    return Complex(real + operand2.real, imaginary+operand2.imaginary); //返回实部虚部分别相加
}

Complex Complex::operator-(const Complex &operand2) const
{
    return Complex(real - operand2.real, imaginary-operand2.imaginary); //返回实部虚部分别相减
}

Complex Complex::operator*(const Complex &operand2) const
{
    return Complex( real*operand2.real - imaginary*operand2.imaginary, imaginary*operand2.real + real*operand2.imaginary);  //返回乘
}

bool Complex::operator==(const Complex &operand2) const
{
    if(real == operand2.real && imaginary == operand2.imaginary)    //如果实部虚部分别相同
        return true;
    else
        return false;
}

bool Complex::operator!=(const Complex &operand2) const
{
    if(*this == operand2)   //如果相等
        return false;
    else
        return true;
}

ostream &operator<<( ostream &output, const Complex &operand2)
{
    output << "(" << operand2.real << ", " << operand2.imaginary << ")";    //输出

    return output;
}

istream &operator>>( istream &input, Complex &operand2 )
{
    input >> operand2.real; //输入实部
    input >> operand2.imaginary;    //输入虚部

    return input;
}
