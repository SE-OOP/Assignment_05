// Ex10_07: DoubleSubscriptedArray.h
// DoubleSubscriptedArray class definition with overloaded operators..


#define DoubleSubscriptedArray_H

#include <iostream>

class DoubleSubscriptedArray
{
   friend std::ostream &operator<<( std::ostream &, const DoubleSubscriptedArray & );
   friend std::istream &operator>>( std::istream &, DoubleSubscriptedArray & );

public:
   explicit DoubleSubscriptedArray(int =0,int =0); // default constructor
   DoubleSubscriptedArray( const DoubleSubscriptedArray & ); // copy constructor
   ~DoubleSubscriptedArray(); // destructor
   size_t getSize() const; // return size

   const DoubleSubscriptedArray &operator=( const DoubleSubscriptedArray & ); // assignment operator
   bool operator==( const DoubleSubscriptedArray & ) const; // equality operator

   // inequality operator; returns opposite of == operator
   bool operator!=( const DoubleSubscriptedArray &right ) const
   {
      return ! ( *this == right ); // invokes DoubleSubscriptedArray::operator==
   } // end function operator!=

   // subscript operator for non-const objects returns modifiable lvalue
   int &operator ()( int,int );

   // subscript operator for const objects returns rvalue
   int operator()( int,int ) const;
private:
   int a;
   int b;
   int *ptr;
   size_t size; // pointer-based array size
   //int *ptr; // pointer to first element of pointer-based array
}; // end class Array
