#include "Complex.h"
#include <bits/stdc++.h>
using namespace std;

Complex::Complex(double a,double b)
{
    real=a;
    imagincy=b;
}
Complex Complex::operator+(Complex &right)
{
    Complex temp(0,0);
    temp.real=real+right.real;
    temp.imagincy=imagincy+right.imagincy;
    return temp;

}
Complex Complex::operator-(Complex &right)
{
    Complex temp(0,0);
    temp.real=real-right.real;
    temp.imagincy=imagincy-right.imagincy;
    return temp;

}
Complex Complex::operator*(Complex &right)
{
    Complex temp(0,0);
    temp.real=real*right.real-imagincy*right.imagincy;
    temp.imagincy=imagincy*right.real+real*right.imagincy;
    return temp;
}
bool Complex::operator==(Complex &right)
{
    if(real==right.real&&imagincy==right.imagincy)
        return true;
    return false;
}
bool Complex::operator!=(Complex &right)
{
    if(*this==right)
        return false;
    return true;
}
istream &operator>>(istream &input,Complex &a)
{
    input>>a.real;
    input>>a.imagincy;
    return input;
}
ostream &operator<<(ostream &output,const Complex &a)
{
    output<<"("<<a.real<<","<<a.imagincy<<")";
    return output;
}
