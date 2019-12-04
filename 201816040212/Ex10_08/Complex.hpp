//
//  Complex.hpp
//  Ex10_08
//
//  Created by MacBook Pro on 2019/11/21.
//  Copyright © 2019 MacBook Pro. All rights reserved.
//

#ifndef Complex_hpp
#define Complex_hpp
#include <iostream>
#include <stdio.h>
using namespace std;
class Complex
{
    friend istream&operator>>(istream&,Complex &);
    friend ostream&operator<<(ostream&,Complex &);
public:
    Complex(double,double);
    Complex operator*(const Complex&);
    bool operator==(const Complex&)const;
    bool operator!=(const Complex&)const;
private:
    double real;
    double imaginary;
};
#endif /* Complex_hpp */
