#include <iostream>
#include "DoubleSubscriptedArray.h"
#include<iomanip>
using namespace std;

DoubleSubscriptedArray::DoubleSubscriptedArray(int r, int c)
    :row(r), column(c)
{
    int i;
    for(i = 0; i < row*column; ++i)
        v.push_back(0); //每次放入数组一个值
}

int &DoubleSubscriptedArray::operator()(int r, int c)
{
    return this->v[r*c+c+1];
}

bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray &d) const
{
    int p = this->column*this->row; //自身总数
    int q = d.column*d.row; //参数总数

    if(p != q)  //如数目不同，则数组肯定不同
        return false;

    for(int i = 0; i < p; ++i)
    {
        if(this->v[i] != d.v[i])
            return false;
    }

    return true;
}

bool DoubleSubscriptedArray::operator!=(const DoubleSubscriptedArray &d) const
{
    if(*this == d)
        return false;
    else
        return true;
}

const DoubleSubscriptedArray &DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray &d)
{
    this->v = d.v;  //数组赋值
    return *this;
}

ostream &operator<<( ostream &output, const DoubleSubscriptedArray &d)
{
    int i;

    for(i = 0; i < d.column*d.row; ++i)
    {
        output << d.v[i] << " ";
        if( (i+1) % d.column == 0 && i != 0)
            output << "\n";
    }

    return output;
}

istream &operator>>( istream &input, DoubleSubscriptedArray &d)
{
    int i;

    for(i = 0; i < d.column*d.row; ++i)
    {
        input >> setw(1) >> d.v[i];

    }

    return input;
}
