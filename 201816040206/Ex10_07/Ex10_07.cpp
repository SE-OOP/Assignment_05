#include <iostream>
#include <stdexcept>
#include "DoubleSubscriptedArray.h"
using namespace std;
#include<iomanip>

int main()
{
    DoubleSubscriptedArray integers1(3,5);
    DoubleSubscriptedArray integers2(2,2);
    cout <<"\nDoubleSubscriptedArray after initialization:\n"<<integers1;
    cout <<"\nDoubleSubscriptedArray after initialization:\n"<<integers2;

    cin >>integers1>>integers2;
    cout<<"\n输入之后，初始化对象:\n"
    <<"integers1:\n "<<integers1
    <<"integers2:\n "<<integers2;
}
