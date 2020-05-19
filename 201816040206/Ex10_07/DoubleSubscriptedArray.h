#ifndef DOUBLESUBSCRIPTEDARRAY_H
#define DOUBLESUBSCRIPTEDARRAY_H

#include <iostream>

class DoubleSubscriptedArray
{
    friend std::ostream &operator<<(std::ostream &,const DoubleSubscriptedArray &);
    friend std::istream &operator>>(std::istream &, DoubleSubscriptedArray &);

public:
    DoubleSubscriptedArray(int=10,int=10);
    //DoubleSubscriptedArray(const DoubleSubscriptedArray&);
    //~DoubleSubscriptedArray();
    //size_t getSize()const;
    int &operator()(int,int);
    int operator()(int,int)const;
    DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &);
    bool operator==(const DoubleSubscriptedArray&)const;
    bool operator!=(const DoubleSubscriptedArray&right)const
    {
        return !(*this ==right);
    }
private:
    size_t row;
    size_t column;
    int *ptr;
};
#endif // DOUBLESUBSCRIPTEDARRAY_H
