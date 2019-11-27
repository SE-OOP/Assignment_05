#include "DoubleSubscriptedArray.h"
#include <iostream>
#include <iomanip>
dsA::dsA(int a,int b)
{
    row=a;
    column=b;
    ptr = ( int ** )new int *[ a ];
    for(int i=0;i<a;i++){
        ptr[i]=new int(b);
        for(int j=0;j<b;j++)
            ptr[i][j]=0;
    }
}
dsA::~dsA()
{
    //cout<<"数组已被销毁";
}
int dsA::operator()(int a,int b)
{
    return ptr[a][b];
}
bool dsA::operator==(const dsA& right)
{
    if(row!=right.row||column!=right.column)
        return false;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++)
            if(ptr[i][j]!=right.ptr[i][j])
                return false;
    }
    return true;
}
bool dsA::operator!=(const dsA& right)
{
    if(*this==right)
        return false;
    else
        return true;
}
void dsA::operator=(const dsA& right)
{
    this->row=right.row;
    this->column=right.column;
    this->ptr = ( int ** )new int *[ row ];
    for(int i=0;i<row;i++){
        this->ptr[i]=new int[column];
        for(int j=0;j<column;j++){
            this->ptr[i][j]=right.ptr[i][j];
        }
    }



}
istream &operator>>(istream &input,dsA &a)
{
    cout<<"请输入数组的值"<<endl;
    for(int i=0;i<a.row;i++){
        for(int j=0;j<a.column;j++){
            input>>a.ptr[i][j];
        }
    }
    return input;
}
ostream &operator<<(ostream &output,const dsA &a)
{
    cout<<"输出数组的值"<<endl;
    for(int i=0;i<a.row;i++){
        for(int j=0;j<a.column;j++){
            output<<setw(4)<<a.ptr[i][j];
        }
        output<<endl;
    }
    return output;
}
