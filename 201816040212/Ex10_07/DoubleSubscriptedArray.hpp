//
//  DoubleSubscriptedArray.hpp
//  Ex10_07
//
//  Created by MacBook Pro on 2019/11/21.
//  Copyright © 2019 MacBook Pro. All rights reserved.
//

#ifndef DoubleSubscriptedArray_hpp
#define DoubleSubscriptedArray_hpp
#include<vector>
using namespace std;
#include <iostream>
class DoubleSubscriptedArray
{
    friend ostream &operator<<(ostream&,DoubleSubscriptedArray&);
    friend istream &operator>>(istream&,DoubleSubscriptedArray&);
public:
    DoubleSubscriptedArray(int,int);
    bool operator==(const DoubleSubscriptedArray&)const;
    bool operator!=(const DoubleSubscriptedArray&)const;
    DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray&);
    int &operator()(int,int);
    int operator()(int,int)const;
    int getx();
    int gety();
private:
    vector<int> iii;
    int x;
    int y;
};
#endif /* DoubleSubscriptedArray_hpp */
