#ifndef DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#define DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
class DoubleSubscriptedArray
{
       friend std::ostream &operator<<(std::ostream &,const DoubleSubscriptedArray &);
       friend std::istream &operator>>(std::istream &, DoubleSubscriptedArray &);
public :explicit DoubleSubscriptedArray(int=0,int=0);
       DoubleSubscriptedArray(const DoubleSubscriptedArray &);
       int getSize()const;
       const DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &);
       bool operator==(const DoubleSubscriptedArray &)const;
       bool operator!=(const DoubleSubscriptedArray &right)const
       {
           return !(*this==right);
       }
       int &operator()(int,int);
       int operator()(int,int)const;
private:
    int size1;
    int size2;
    int **ptr;
};


#endif // DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
