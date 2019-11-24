#include <iostream>
#include "DoubleSubscriptedArray.h"

using namespace std;



DoubleSubscriptedArray::DoubleSubscriptedArray(int r,int c)

{
    row = r;
    column = c;
    ptr = new int [r * c];
}

const DoubleSubscriptedArray &DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray &right)
{
    int all;
    if(&right != this)
    {
        if(row != right.row or column != right.column)
        {
            delete [] ptr;
            row = right.row;
            column =right.column;
            all = row * column;
            ptr = new int[all];
        }
        for(size_t i = 0; i < row; ++i)
        {
            for(size_t j = 0; j < column; ++j)
                ptr[i * column + j] = right.ptr[i * column + j];
        }
    }
    return *this;
}

bool DoubleSubscriptedArray::operator!=(const DoubleSubscriptedArray &right) const
{
    return !(*this == right);
}

bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray &right) const
{
    if(row != right.row or column != right.column)
        return false;
    for(size_t i = 0 ; i < row; ++i)
    {
        for(size_t j = 0; j < column; ++j)
            if(ptr[i * column + j] != right.ptr[i * column + j])
                return false;
    }
    return true;
}

int &DoubleSubscriptedArray::operator()(int r, int c)
{
    if(r >= row or r < 0 or c >= column or c < 0)
        throw("Error!");
    return ptr[r * column + c];
}
int DoubleSubscriptedArray::operator()(int r, int c) const
{
    if(r >= row or r < 0 or c >= column or c < 0)
        throw("Error!");
    return ptr[r * column + c];
}
ostream &operator<<(ostream &output,const DoubleSubscriptedArray &a)
{
    for(size_t i = 0;i < a.row ; ++i){
        for(size_t j = 0; j < a.column; ++j)
        {
            output<<a.ptr[i * a.column + j ]<<' ';
        }
        output<<endl;
    }
    return output;
}
istream &operator>>(istream &input,DoubleSubscriptedArray &a)
{
    for(size_t i = 0; i < a.row ; ++i)
        for(size_t j = 0; j <a.column ; ++j)
            input>>a.ptr[i * a.column + j];
    return input;
}
