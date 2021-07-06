#include<iostream>
#include<stdio.h>

using namespace std;

class DoubleSubscriptedArray
{
   friend ostream &operator<<(ostream &,const DoubleSubscriptedArray &);
   friend istream &operator>>(istream &,DoubleSubscriptedArray &);
public:
   DoubleSubscriptedArray( int ,int  );
   int &operator()(int , int);
   int operator()(int , int) const;
   const DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &);
   bool operator==(const DoubleSubscriptedArray &) const;
   bool operator!=(const DoubleSubscriptedArray &) const;
private:
   int row;
   int column;
   int *ptr;
};
