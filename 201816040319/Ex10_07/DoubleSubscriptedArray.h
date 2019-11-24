#ifndef DOUBLE_SUBSCRIPTED_ARRAY_H
#define DOUBLE_SUBSCRIPTED_ARRAY_H
#include <iostream>
using namesapce std;
class DoubleSubscriptedArray
{
   friend ostream &operator<<(ostream &, const DoubleSubscriptedArray & );
   friend istream &operator>>( istream &, DoubleSubscriptedArray & );
public:
   DoubleSubscriptedArray( int = 3, int = 3 ); // default constructor
   // copy constructor
   DoubleSubscriptedArray( const DoubleSubscriptedArray & );
   ~DoubleSubscriptedArray(); // destructor
   int getRowSize() const; // return number of rows
   int getColumnSize() const; // return number of columns
   const DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray & ); // assignment operator
   // equality operator
   bool operator==( const DoubleSubscriptedArray & ) const;
   // inequality operator; returns opposite of == operator
   bool operator!=( const DoubleSubscriptedArray &right ) const
   {
      // invokes DoubleSubscriptedArray::operator==
      return !( *this == right );
   } // end function operator!=
   // function call operator for non-const objects
   // returns modifiable lvalue
   int &operator()( int, int );
   // function call operator for const objects returns rvalue
   int operator()( int, int ) const;
private:
   int rowSize; // number of rows in array
   int columnSize; // number of columns in array
   int *ptr; // pointer to first element of pointer-based array
}; // end class DoubleSubscriptedArray
#endif
