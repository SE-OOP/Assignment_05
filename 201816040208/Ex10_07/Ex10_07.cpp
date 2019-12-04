
#include <iostream>
#include "DoubleSubscriptedArray.h"
using namespace std;

int main()
{
    DoubleSubscriptedArray d1(2, 3);    //定义对象
    DoubleSubscriptedArray d2(2, 3);
    DoubleSubscriptedArray d3(2, 3);

    cin >> d1 >> d2;    //输入数组

    if(d1 == d2)    //如相等
        cout << endl << "d1 is the same as d2" << endl << endl;
    else
        cout << endl << "d1 is not the same as d2" << endl << endl;

    cout << "The first row of the first row of d1 is " << endl;
    cout << d1(1, 1) << endl << endl;
    cout << "d3 was originally" << endl;
    cout << d3 << endl;
    d3 = d1;
    cout << "d3 is after d1 is assigned" << endl;
    cout << d3 << endl;
    if(d1 != d3)
        cout << "d1 is not the same as d3" << endl;
    else
        cout << "d1 is the same as d3" << endl;

}
