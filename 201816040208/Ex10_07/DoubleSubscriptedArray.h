
#ifndef DOUBLESUBSCRIPTEDARRAY_H
#define DOUBLESUBSCRIPTEDARRAY_H

#include <iostream>
#include <vector>
using namespace std;

class DoubleSubscriptedArray
{
    friend std::ostream &operator<<(std::ostream &, const DoubleSubscriptedArray &);
    friend std::istream &operator>>(std::istream &, DoubleSubscriptedArray &);
public:
    DoubleSubscriptedArray(int = 0, int = 0);
    bool operator==(const DoubleSubscriptedArray &) const;  //重载==
    bool operator!=(const DoubleSubscriptedArray &) const;  //重载！=
    const DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &);    //重载=
    int &operator()(int r, int c);

private:
    int row, column;
    vector < int > v;
};
#endif // DOUBLESUBSCRIPTEDARRAY_H
