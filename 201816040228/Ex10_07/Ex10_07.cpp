#include <iostream>
#include <stdexcept>
#include "DoubleSubscriptedArray.h"
using namespace std;
int main()
{
    int row,column;
    cout << "请输入数组的行数与列数"<<endl;
    cin >>row>>column;
    DoubleSubscriptedArray m(row,column);//创建对象数组
    m.getRow();
    m.getColumn();
    cout <<"初始数组为"<<endl;
    cout<<m;//输出初始对象数组
    cout<<"请输入数值给数组赋值"<<endl;
    cin>>m;
    cout<<"赋值后数组为"<<endl;
    cout <<m;//输出赋值后的数组
    cout<<"\nm[1][2] is ";
    cout << m(1,2);
    cout<<"\nm[2][2] is ";//输出指定数组的某个数
    cout << m(2,2);
    cout << endl;
    if(m(1,2) != m(2,2))//判断数组中两个数是否相等
    {
        cout << "m(1,2) and m(2,2) are not equal  "<<endl;
    }
    if(m(1,2) == m(2,2))
    {
        cout << "m(1,2) and m(2,2) are equal "<<endl;
    }
    cout << "\nAssigning 100 to m(1,2)"<<endl;//修改指定数组中的某个数
    m(1,2)=100;
    cout << m;
    return 0;
}
