#include <iostream>
#include "DoubleSubscriptedArray.h"
using namespace std;

int main()
{
    dsA num1(2,2),num2(2,2);
    cin>>num1;
    cin>>num2;
    if(num1==num2)
        cout<<"两数组相等"<<endl;
    if(num1!=num2)
        cout<<"两数组不相等"<<endl;
    cout<<num1(1,1)<<endl;
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<"将num2的值赋给num1";
    num1=num2;
    cout<<num1;

    return 0;
}
