#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
    Complex com1(0,0),com2(0,0),temp(0,0);
    cout<<"请输入复数"<<endl;
    cin>>com1;
    cout<<"请输入复数"<<endl;
    cin>>com2;
    cout<<"两复数相加为"<<endl;
    temp=com1+com2;
    cout<<com1<<"+"<<com2<<"="<<temp<<endl;
    cout<<"两复数相减为"<<endl;
    temp=com1-com2;
    cout<<com1<<"-"<<com2<<"="<<temp<<endl;
    cout<<"两复数相乘为"<<endl;
    temp=com1*com2;
    cout<<com1<<"*"<<com2<<"="<<temp<<endl;
    cout<<"两复数的关系为"<<endl;
    if(com1==com2)
        cout<<"两复数相等";
    else if(com1!=com2)
        cout<<"两复数不相等";
    return 0;
}
