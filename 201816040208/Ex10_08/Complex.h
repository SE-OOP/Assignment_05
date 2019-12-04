#ifndef COMPLEX_H
#define CONPLEX_H

class Complex
{
    friend std::ostream &operator<<( std::ostream &, const Complex &);
    friend std::istream &operator>>( std::istream &, Complex &);
public:
    explicit Complex( double = 0.0, double = 0.0);
    Complex operator+(const Complex &) const;   //重载加法
    Complex operator-(const Complex &) const;   //重载减法
    Complex operator*(const Complex &) const;   //重载乘法
    bool operator==(const Complex &) const; //重载等于
    bool operator!=(const Complex &) const; //重载不等于
private:
    double real;    //实部
    double imaginary;   //虚部
};
#endif // COMPLEX_H
