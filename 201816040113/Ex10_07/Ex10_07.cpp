//DoubleSubscriptedArrayTest.cpp
//DoubleSubscriptedArray class Test program
#include <iostream>
#include <stdexcept>
#include "DoubleSubscriptedArray.h"
using namespace std;

int main()
{
    //create two DoubleSubscriptedArray
    DoubleSubscriptedArray array1(3,3);
    DoubleSubscriptedArray array2(3,3);
    //print array1 rows and columns and contents
    cout<<"The rows of array1 is: "<<array1.getRows()<<",the columns of array1 is: "<<array1.getColumns()
       <<"\narray1 after initialization:\n"<<array1;
    //print array2 rows and columns and contents
    cout<<"The rows of array2 is: "<<array2.getRows()<<",the columns of array2 is: "<<array2.getColumns()
       <<"\narray2 after initialization:\n"<<array2;

    //input and print arrray1 and array2
    cout<<"Please input the value of array1"<<endl;
    cin>>array1;
    cout<<"Please input the value of array2"<<endl;
    cin>>array2;
    cout<<"\nAfter input,the arrays contain:\n"
       <<"array1:\n"<<array1
       <<"array2:\n"<<array2;

    //use overloaded inequality (==)(!=) operator
    if(array1==array2)
    {
        cout<<"array1 and array2 are equal"<<endl;
    }
    if(array1!=array2)
    {
        cout<<"array1 and array2 are not equal"<<endl;
    }

    //create array3 using array1 as an initializer
    //print rows and columns and contents
    DoubleSubscriptedArray array3(array1);//invokes copy constructor

    cout<<"The rows of array3 is: "<<array3.getRows()<<",the columns of array3 is: "<<array3.getColumns()
       <<"\narray3 after initialization:\n"<<array3;

       //use overload assignment(=)operator
       cout<<"\nAssigning array2 to array1"<<endl;
       array1=array2;
    cout<<"array1:\n"<<array1<<"array2:\n"<<array2;

    //use overloaded subscript operator to create rvalue
    cout<<"\narray1[2][2] is "<<array1(2,2)<<endl;
    cout<<"\n\nAssigning 1000 to array1[2][2]"<<endl;
    array1(2,2)=1000;
    cout<<"\narray1[2][2] is "<<array1(2,2)<<endl;

    //attempt to use out-of-range subscript
    try
    {
        cout<<"\nAttempt to assign 1000 to array1[999][999]"<<endl;
        array1(999,999)=1000;
    }//end try
    catch(out_of_range &ex)
    {
        cout<<"An exception occurred:"<<ex.what()<<endl;
    }//end catch

}//end main
