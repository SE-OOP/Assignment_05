#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED
#include <ostream>
using namespace std;
class Complex
{
    friend istream &operator>>(istream &,Complex &);
    friend ostream &operator<<(ostream &,const Complex &);
public:
    explicit Complex(double,double);
    Complex operator+(Complex &);
    Complex operator-(Complex &);
    Complex operator*(Complex &);
    bool operator==(Complex &);
    bool operator!=(Complex &);
private:
    double real;
    double imagincy;



};


#endif // COMPLEX_H_INCLUDED
