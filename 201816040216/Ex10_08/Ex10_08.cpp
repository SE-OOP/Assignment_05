#include <iostream>
using namespace std;
#include"Complex.h"

int main()
{
    cout<<"请输入x的实部与虚部:";
    Complex x;
    cin>> x;
    cout<< x<<endl;

    cout<<"请输入y的实部与虚部:";
    Complex y;
    cin>> y;
    cout<< y<<endl;

    Complex z;

    z=x * y;
    cout<< z<<endl;

    if(x == y)
    {
       cout<<"x与ya相等";
    }
    else
    {
        cout<<"x与y不相等";
    }

}
