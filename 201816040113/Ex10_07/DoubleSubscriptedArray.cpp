//DoubleSubscriptedArray.cpp
#include <iostream>
#include <iomanip>
#include "DoubleSubscriptedArray.h"
using namespace std;

//default constructor for class DoubleSubscriptedArray
DoubleSubscriptedArray::DoubleSubscriptedArray(int row,int column)
{
    rows=row;
    columns=column;
    ptr= new int[rows*columns];
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            ptr[i*columns+j]=0;//initialize all the elements into zero
        }
    }
}//end DoubleSubscriptedArray default constructor


//copy constructor for class DoubleSubscriptedArray
//must receive a reference to a DoubleSubscriptedArray
DoubleSubscriptedArray::DoubleSubscriptedArray(const DoubleSubscriptedArray &DoubleSubscriptedArrayToCopy)
:rows(DoubleSubscriptedArrayToCopy.rows),columns(DoubleSubscriptedArrayToCopy.columns)
{
    ptr= new int[rows*columns];
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            ptr[i*columns+j]=DoubleSubscriptedArrayToCopy.ptr[i*columns+j];//copy into object
        }
    }
}//end DoubleSubscriptedArray Copy constructor

//destructor for class DoubleSubscriptedArray
DoubleSubscriptedArray::~DoubleSubscriptedArray()
{
    delete [] ptr;//release pointer-based DoubleSubscriptedArray space
}//end destructor

const DoubleSubscriptedArray &DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray &right)
{
    if(&right!=this)//avoid self-assignment
    {
        //for DoubleSubscriptedArray of different sizes,deallocate original
        //left-side DoubleSubscriptedArray,then allocate new left-side DoubleSubscriptedArray
        if(rows!=right.rows||columns!=right.columns)
        {
            delete [] ptr;//release space
            rows=right.rows;//resize this object
            columns=right.columns;//resize this object
            ptr=new int[rows*columns];//create space for DoubleSubscriptedArray copy
        }//end inner if
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<columns;j++)
            {
                ptr[i*columns+j]=right.ptr[i*columns+j];//copy DoubleSubscriptedArray into object
            }
        }
    }//end outer if
    return *this;
}//end function operator=

//determine if two DoubleSubscriptedArray are equal and
//return true,otherwise return false
bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray &right)const
{
    if(rows!=right.rows||columns!=right.columns)
    {
        return false;//DoubleSubscriptedArray of different number of elements
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            if(ptr[i*columns]!=right.ptr[i*columns])
            {
                return false;//DoubleSubscriptedArray contents are not equal
            }
        }
    }
    return true;//DoubleSubscriptedArray contents are equal
}//end function operator==

//overload () for non-const DoubleSubscriptedArray
//reference return creates a modifiable lvalue
int &DoubleSubscriptedArray::operator()(int row,int column)
{
    //check for out-of-range error
    if(row>=rows||column>=columns)
    {
        throw out_of_range("out of range");
    }
    return ptr[row*columns+column];//reference return
}//end function operator()

//overload () for const DoubleSubscriptedArray
//reference return creates a modifiable lvalue
int &DoubleSubscriptedArray::operator()(int row,int column)const
{
    //check for out-of-range error
    if(row>=rows||column>=columns)
    {
        throw out_of_range("out of range");
    }
    return ptr[row*columns+column];//reference return
}//end function operator()

//overload input operator for class DoubleSubscriptedArray
//inputs values for entire DoubleSubscriptedArray
istream &operator>>(istream &input, DoubleSubscriptedArray &a)
{
    for(int i=0;i<a.rows;i++)
    {
        for(int j=0;j<a.columns;j++)
        {
            input>>a.ptr[i*a.columns+j];
        }
    }
    return input;
}//end function

//overload output operator for class DoubleSubscriptedArray
ostream &operator<<(ostream &output,const DoubleSubscriptedArray &a)
{
    //output private ptr-based DoubleSubscriptedArray
    for(int i=0;i<a.rows;i++)
    {
        for(int j=0;j<a.columns;j++)
        {
            output<<setw(12)<<a.ptr[i*a.columns+j];
        }
        output<<endl;
    }
    return output;//enables cout <<x<<y
}//end function operator<<

