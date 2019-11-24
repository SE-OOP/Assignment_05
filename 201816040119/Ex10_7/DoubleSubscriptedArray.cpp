#include<iostream>
#include<iomanip>
#include<stdexcept>
#include"DoubleSubscriptedArray.h"
using namespace std;
DoubleSubscriptedArray::DoubleSubscriptedArray(int a,int b)
{
    int i,k;
    size1=a;
    size2=b;
    ptr=(int**)malloc(sizeof(int*)*a);
    for(i=0;i<a;i++)
    {
        ptr[i]=(int*)malloc(sizeof(int)*b);
        for(k=0;k<b;k++)
            ptr[i][k]=0;
    }
}
DoubleSubscriptedArray::DoubleSubscriptedArray(const DoubleSubscriptedArray&DS)
{
    size1=DS.size1;
    size2=DS.size2;
    int i,k;
    ptr=(int**)malloc(sizeof(int*)*size1);
    for(i=0;i<size1;i++)
    {
        ptr[i]=(int*)malloc(sizeof(int)*size2);
        for(k=0;k<size2;k++)
            ptr[i][k]=0;
    }
}
const DoubleSubscriptedArray &DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray &right)
{
    int i,k;
    if(&right!=this)
    {
        if(size1!=right.size1)
        {
            delete[]ptr;
            size1=right.size1;
            size2=right.size2;
            ptr=(int**)malloc(sizeof(int*)*size1);
        }
        for(i=0;i<size1;i++)
    {
        for(k=0;k<size2;k++)
            ptr[i][k]=right.ptr[i][k];
    }
    }
    return *this;
}
bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray &right)const
{
    int i,k;
    if(size1!=right.size1||size2!=right.size2)
        return 0;
    for(i=0;i<size1;i++)
        for(k=0;k<size2;k++)
        if(ptr[i][k]!=right.ptr[i][k])
            return 0;
    return 1;
}
int  &DoubleSubscriptedArray::operator()(int a,int b)
{
    if(a<0||b<0)
        throw out_of_range("Subscript out of range");
    return ptr[a][b];
}
istream &operator>>(istream &input,DoubleSubscriptedArray &a)
{
    int i,k;
    for(i=0;i<a.size1;i++)
    {
        for(k=0;k<a.size2;k++)
            input>>a.ptr[i][k];
    }
    return input;
}
ostream &operator<<(ostream &output,const DoubleSubscriptedArray &a)
{
    int i,k;
    for(i=0;i<a.size1;i++)
    {
        for(k=0;k<a.size2;k++)
        {
            output<<setw(12)<<a.ptr[i][k];
            if((k+1)%4==0)
                output<<endl;
        }

    }
    if(a.size1==1&&a.size2%4!=0)
        output<<endl;
    return output;
}
