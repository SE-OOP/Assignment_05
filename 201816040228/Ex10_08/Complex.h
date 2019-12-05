#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

class Complex//创建类Complex
{
    friend std::ostream &operator<<( std::ostream &,const Complex &);
    friend std::istream &operator>>( std::istream &,Complex &);

public:
    explicit Complex( double= 0.0,double =0.0 );//创建类Comlpex的构造函数,并初始化
    Complex operator+(const Complex & ) const;//执行加法运算
    Complex operator-(const Complex & ) const;//执行减法运算
    Complex operator*(const Complex & ) const;//执行乘法运算
    bool operator==( const Complex &) const;//判断两个复数是否相等
    bool operator!=( const Complex &operand2) const
    {
        return !( *this == operand2 );
    }
private:
    double real;//实部
    double imaginary;//虚部
};

#endif // COMPLEX_H
