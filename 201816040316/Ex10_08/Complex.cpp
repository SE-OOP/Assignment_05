#include<iostream>
#include"Complex.h"
using namespace std;

Complex::Complex(double real, double imaginary)
 :real(realPart),
 imaginary(imaginaryPart)
{
    
}
Complex Complex::operator+( const Complex &operand2 ) const
{
    return Complex(real + operand2. real,imaginary + operand2.imaginary );
}

Complex Complex::operator-( const Complex &operand2 ) const
{
    return Complex(real - operand2. real,imaginary - operand2.imaginary );
}

Complex Complex::operator*( const Complex &operand2 ) const
{
    return Complex(real * operand2. real - imaginary * operand2.imaginary, real * operand2.imaginary + imaginary + operand2.real );
}

bool Complex::operator==( const Complex &operand2 ) const
{
    if((imaginary == 0)&&(operand2.imaginary == 0)||(real - operand2. real == 0))
        return true;
    if((imaginary == 0)&&(operand2.imaginary == 0)||(real - operand2. real != 0))
        return false;
}

bool Complex::operator!=( const Complex &operand2 ) const
{
    if((imaginary == 0)&&(operand2.imaginary == 0)||(real - operand2. real == 0))
        return false;
    if((imaginary == 0)&&(operand2.imaginary == 0)||(real - operand2. real != 0))
        return true;
}
