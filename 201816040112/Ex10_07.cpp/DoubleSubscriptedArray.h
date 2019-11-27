#ifndef DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#define DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
using namespace std;
#include <istream>
class dsA
{
    friend istream &operator>>(istream &,dsA &);
    friend ostream &operator<<(ostream &,const dsA &);
public:
    dsA(int,int);
    ~dsA();
    int operator()(int,int );
    bool operator==(const dsA&);
    bool operator!=(const dsA&);
    void operator=(const dsA&);
private:
    int row,column;
    int **ptr;


};


#endif // DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
