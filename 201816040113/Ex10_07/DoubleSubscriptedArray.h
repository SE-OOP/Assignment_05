//DoubleSubscriptedArray.h
#ifndef DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#define DOUBLESUBSCRIPTEDARRAY_H_INCLUDED

#include <iostream>
using namespace std;

class DoubleSubscriptedArray
{
    friend ostream &operator<<(ostream & , const DoubleSubscriptedArray &);
    friend istream &operator>>(istream & , DoubleSubscriptedArray &);

public:
    DoubleSubscriptedArray(int=3,int=5);//default constructor
    DoubleSubscriptedArray(const DoubleSubscriptedArray & );//copy constructor
    ~DoubleSubscriptedArray();//destructor

    const DoubleSubscriptedArray &operator=( const DoubleSubscriptedArray &);//assignment operator
    bool operator==(const DoubleSubscriptedArray & )const;//equality operator
    bool operator!=(const DoubleSubscriptedArray &right )const
    {
        return !(*this==right);//invokes DoubleSubscriptedArray::operator==
    }//end function operator !=

    int &operator()(int=0,int=0);//initialize lvalue
    int &operator()(int=0,int=0)const;//initialize rvalue

    int getRows()const//function getrows
    {
        return rows;
    }
    int getColumns()const//function getcolumns
    {
        return columns;
    }

private:
    int rows,columns;//the rows and columns
    int *ptr;//pointer to first element of pointer-based DoubleSubscriptedArray

};
#endif // DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
