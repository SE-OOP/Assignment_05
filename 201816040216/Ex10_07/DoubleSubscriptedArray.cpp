// Ex10_07:DoubleSubscriptedArray.cpp
// DoubleSubscriptedArray class member- and friend-function definitions.
#include <iostream>
#include <iomanip>
#include <stdexcept>

#include "DoubleSubscriptedArray.h" // DoubleSubscriptedArray class definition
using namespace std;

// default constructor for class DoubleSubscriptedArray (default size 10)
DoubleSubscriptedArray::DoubleSubscriptedArray( int arraySize1,int arraySize2 )

{
    a=arraySize1,b=arraySize2;
    size=arraySize1*arraySize2;
    ptr =new int[ size ];
   for ( size_t i = 0; i < size; ++i )
      ptr[ i ] = 0; // set pointer-based array element
} // end DoubleSubscriptedArray default constructor

// copy constructor for class DoubleSubscriptedArray;
// must receive a reference to an DoubleSubscriptedArray
DoubleSubscriptedArray::DoubleSubscriptedArray( const DoubleSubscriptedArray &arrayToCopy )
   : size( arrayToCopy.size ),
     ptr( new int[ size ] )
{
   for ( size_t i = 0; i < size; ++i )
      ptr[ i ] = arrayToCopy.ptr[ i ]; // copy into object
} // end DoubleSubscriptedArray copy constructor

// destructor for class DoubleSubscriptedArray
DoubleSubscriptedArray::~DoubleSubscriptedArray()
{
   delete [] ptr; // release pointer-based DoubleSubscriptedArray space
} // end destructor

// return number of elements of DoubleSubscriptedArray
size_t DoubleSubscriptedArray::getSize() const
{
   return size; // number of elements in DoubleSubscriptedArray
} // end function getSize

// overloaded assignment operator;
// const return avoids: ( a1 = a2 ) = a3
const DoubleSubscriptedArray &DoubleSubscriptedArray::operator=( const DoubleSubscriptedArray &right )
{
   if ( &right != this ) // avoid self-assignment
   {
      // for DoubleSubscriptedArrays of different sizes, deallocate original
      // left-side DoubleSubscriptedArray, then allocate new left-side DoubleSubscriptedArray
      if ( size != right.size )
      {
         delete [] ptr; // release space
         size = right.size; // resize this object
         ptr = new int[ size ]; // create space for DoubleSubscriptedArray copy
      } // end inner if

      for ( size_t i = 0; i < size; ++i )
         ptr[ i ] = right.ptr[ i ]; // copy array into object
   } // end outer if

   return *this; // enables x = y = z, for example
} // end function operator=

// determine if two Arrays are equal and
// return true, otherwise return false
bool DoubleSubscriptedArray::operator==( const DoubleSubscriptedArray &right ) const
{
   if ( size != right.size )
      return false; // arrays of different number of elements

   for ( size_t i = 0; i < size; ++i )
      if ( ptr[ i ] != right.ptr[ i ] )
         return false; // DoubleSubscriptedArray contents are not equal

   return true; // Arrays are equal
} // end function operator==

// overloaded subscript operator for non-const Arrays;
// reference return creates a modifiable lvalue
int &DoubleSubscriptedArray::operator()( int a,int b)
{
   // check for subscript out-of-range error
   if ( ((a-1)*5+b-1) < 0 || ((a-1)*5+b-1) >= size )
      throw out_of_range( "Subscript out of range" );

   return ptr[ ((a-1)*5+b-1) ]; // reference return
} // end function operator[]

// overloaded subscript operator for const Arrays
// const reference return creates an rvalue
int DoubleSubscriptedArray::operator ()( int a,int b ) const
{
   // check for subscript out-of-range error
   if ( ((a-1)*5+b) < 0 || ((a-1)*5+b) >= size )
      throw out_of_range( "Subscript out of range" );

   return ptr[ ((a-1)*5+b) ]; // returns copy of this element
} // end function operator[]

// overloaded input operator for class DoubleSubscriptedArray;
// inputs values for entire DoubleSubscriptedArray
istream &operator>>( istream &input, DoubleSubscriptedArray &a )
{
   for ( size_t i = 0; i < a.size; ++i )
      input >> a.ptr[ i ];

   return input; // enables cin >> x >> y;
} // end function

// overloaded output operator for class DoubleSubscriptedArray
ostream &operator<<( ostream &output, const DoubleSubscriptedArray &a )
{
   // output private ptr-based DoubleSubscriptedArray
   for ( size_t i = 0; i < a.size; ++i )
   {
      output << setw( 12 ) << a.ptr[ i ];

      if ( ( i + 1 ) % 5 == 0 ) // 4 numbers per row of output
         output << endl;
   } // end for

   if ( a.size % 5 != 0 ) // end last line of output
      output << endl;

   return output; // enables cout << x << y;
} // end function operator<<

