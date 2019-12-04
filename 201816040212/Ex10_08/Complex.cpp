//
//  Complex.cpp
//  Ex10_08
//
//  Created by MacBook Pro on 2019/11/21.
//  Copyright © 2019 MacBook Pro. All rights reserved.
//
#include <complex>
#include "Complex.hpp"
Complex::Complex(double x,double y){
    real=x;
    imaginary=y;
}
bool Complex::operator==(const Complex & c)const{
    if(real==c.real&&imaginary==c.imaginary)return true;
    else
    return false;
}
bool Complex::operator!=(const Complex &c)const{
    return !(*this==c);
}
Complex Complex::operator*(const Complex & c){
   return  Complex(real*c.real-imaginary*c.imaginary,real*c.imaginary+c.real*imaginary);
}
istream &operator>>(istream&in,Complex &c){
    in>>c.real;
    in>>c.imaginary;
    return in;
}
ostream &operator<<(ostream&out,Complex &c){
    out<<"("<<c.real<<","<<c.imaginary<<")";
    return out;
}
