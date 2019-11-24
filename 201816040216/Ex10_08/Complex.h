#define COMPLEX_H
using namespace std;
#include <iostream>
class Complex
{
    friend std::ostream &operator<<(ostream &,const Complex &);
    friend std::istream &operator>>(istream &,Complex &);
public:
    Complex(double =0.0,double=0.0);//constructor
    Complex operator+(const Complex &) const;//addition
    Complex operator-(const Complex &) const;//subtraction
    Complex operator*(const Complex &) const;//multiplication
    bool operator!=(const Complex &)const;//重载等于运算符
    bool operator==(const Complex &)const;//重载不等运算符

private:
    double real;
    double imaginary;

};
