#include<iostream>
#include<stdio.h>
using namespace std;

#include "DoubleSubscriptedArray.h"

int main()
{
   int row, column;
   cout<<"Please input two number for array1"<<endl;
   cin>>row>>column;
   DoubleSubscriptedArray array1(row, column);
   cout<<"Please input "<<row*column<<" int number"<<endl;
   cin>>array1;
   cout<<"The array1 is: "<<endl;
   cout<<array1;

   int row1, column1;
   cout<<"Please input two number for array1"<<endl;
   cin>>row1>>column1;
   DoubleSubscriptedArray array2(row1, column1);
   cout<<"Please input "<<row1*column1<<" int number"<<endl;
   cin>>array2;
   cout<<"The array2 is: "<<endl;
   cout<<array2;

   if(array1 == array2)
        cout<<"array1 is equal to array2"<<endl;
   else
        cout<<"array1 isn't equal to array2"<<endl;

   cout<<"Assigning array2 to array1"<<endl;
   array1 = array2;
   cout<<"Output array1"<<endl;
   cout<<array1;
   cout<<"Get the value of the array1 use the position"<<endl;

   int x, y;
   cin>>x>>y;
   cout<<array1(x, y);



}

