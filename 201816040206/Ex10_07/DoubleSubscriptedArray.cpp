#include <iostream>
#include <iomanip>
#include <stdexcept>

#include "DoubleSubscriptedArray.h"
using namespace std;

DoubleSubscriptedArray::DoubleSubscriptedArray(int doubleSubscriptedarraySize1,int doubleSubscriptedarraySize2)
:row(doubleSubscriptedarraySize1>0? doubleSubscriptedarraySize1:
      throw invalid_argument("Row must be greater than 0")),

	column(doubleSubscriptedarraySize2>0?doubleSubscriptedarraySize2:
        throw invalid_argument("Column must be greater than 0")),
	ptr(new int[row*column])

{
	for (size_t i = 0; i < row*column; ++i)
		ptr[i] = 0;
 }

 int &DoubleSubscriptedArray::operator()(int subscript1,int subscript2)
 {
     if (subscript1< 0 ||subscript1>= row)
		throw out_of_range("Row out of range");
	if (subscript2 < 0 || subscript2 >= column)
		throw out_of_range("Column out of range");
	return ptr[subscript1*subscript2];
 }

 int DoubleSubscriptedArray::operator()(int subscript1,int subscript2)const
 {
     if (subscript1< 0 ||subscript1>= row)
		throw out_of_range("Row out of range");
	if (subscript2 < 0 || subscript2 >= column)
		throw out_of_range("Column out of range");
	return ptr[subscript1*subscript2];
 }
 DoubleSubscriptedArray &DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray &right)
{
	if (&right != this)
	{
		if (row * column != right.row*right.column)
		{
			delete[] ptr;
			row = right.row;
			column = right.column;
			ptr = new int[row * column];
		}

		for (size_t i = 0; i < row * column; ++i)
			ptr[i] = right.ptr[i];
	}
	return *this;
}

bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray &right) const
{
	if (row != right.row)
		return false;
	if (column != right.column)
		return false;
	for (size_t i = 0; i < row*column;++i)
		if (ptr[i] != right.ptr[i])
			return false;
			return true;
}

ostream &operator<<(ostream &output, const DoubleSubscriptedArray &a)
{
	for (size_t i = 0; i < a.column * a.row; ++i)
	{
		output << setw(12) << a.ptr[i];
		if ((i + 1) %4== 0)
			output << endl;
	}
	if (a.column * a.row % 4 != 0)
		output << endl;
	return output;
}
istream &operator>>(istream &input, DoubleSubscriptedArray& a)
{
	for (size_t i = 0; i < a.column*a.row; ++i)
		input >> a.ptr[i];
	return input;
}
