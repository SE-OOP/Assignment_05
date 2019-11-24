#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED
#include <iostream>
#include<string>
using namespace std;
class complex
{
    friend ostream&operator<<(ostream&output,const Complex);
    friend istream&operator>>(istream&input, Complex);
public:
    explicit Complex(double = 0.0. double = 0.0);
    Complex operator+(const Complex &)const;
    Complex operator-(const Complex &)const;
    Complex operator*(const Complex &)const;
    bool Complex operator==(const Complex &)const;
    bool Complex operator!=(const Complex &)const;
private:
    double real;
    double imaginary;
};

#endif // COMPLEX_H_INCLUDED
