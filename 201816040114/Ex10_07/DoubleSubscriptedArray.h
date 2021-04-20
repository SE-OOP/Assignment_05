#ifndef DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#define DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
class DoubleSubscriptedArray
{
friend std::ostream &operator<<(std::ostream & ,DoubleSubscriptedArray &);
friend std::istream &operator>>(std::istream & ,DoubleSubscriptedArray &);

public:
    explicit DoubleSubscriptedArray( int=0 , int=0 );
    int  operator()( int , int  );
    void operator=( DoubleSubscriptedArray & );
    bool operator==( DoubleSubscriptedArray &  );
    bool operator!=(  DoubleSubscriptedArray & );
private:
    int rows;
    int columns;
    int size1;
    int size2;
    int r;
    int c;
    int temp;
};


#endif // DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
