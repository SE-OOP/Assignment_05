#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

using namespace std;

class Complex
{
    friend ostream &operator<<( ostream &, const Complex &);
    friend istream &operator>>( istream &, Complex &);
public:
    Complex(double =0.0,double =0.0);
    Complex operator+(Complex &) const;
    Complex operator-(Complex &) const;
    bool operator==(Complex &) const;
    bool operator!=(Complex &) const;
    Complex operator*(Complex &) const;
    void print() const;
private:
    double real;
    double imaginary;
};
#endif // COMPLEX_H
