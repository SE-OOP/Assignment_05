#ifndef DOUBLESUBSCRIPTEDARRAY_H
#define DOUBLESUBSCRIPTEDARRAY_H
#include <iostream>

class DoubleSubscriptedArray//创建类DoubleSubscripteArray
{
    friend std::ostream &operator<<( std::ostream &,const DoubleSubscriptedArray &);//输入运算符
    friend std::istream &operator>>( std::istream &,DoubleSubscriptedArray &);//输出运算符

public:
    explicit DoubleSubscriptedArray( int=3,int=5 );//构造函数并初始值
    DoubleSubscriptedArray( const DoubleSubscriptedArray &);
    ~DoubleSubscriptedArray();//析构

    const DoubleSubscriptedArray &operator=( const DoubleSubscriptedArray &);//赋值
    bool operator==( const DoubleSubscriptedArray &) const;//判断相等
    bool operator!=( const DoubleSubscriptedArray &right) const
    {
        return !( *this == right );
    }

    int &operator()( int=0, int=0 );//调用（）运算符
    int operator()( int=0, int=0 ) const;
    int getRow() const;
    int getColumn() const;
private:
    int Row;//行
    int Column;//列
    int *ptr;
};



#endif // ARRAY_H
