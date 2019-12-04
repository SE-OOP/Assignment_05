//
//  DoubleSubscriptedArray.cpp
//  Ex10_07
//
//  Created by MacBook Pro on 2019/11/21.
//  Copyright © 2019 MacBook Pro. All rights reserved.
//

#include "DoubleSubscriptedArray.hpp"
#include <vector>
#include <iostream>
#include <iomanip>
DoubleSubscriptedArray::DoubleSubscriptedArray(int x1,int y1){
    this->x=x1;
    this->y=y1;
   // vector<int> iii((x1-1)*(y1-1));
    this->iii.resize((x1)*(y1));
    iii.clear();
}
int &DoubleSubscriptedArray::operator()(int x1,int y1){
    if (1<=x1<x&&1<=y1<y) {
        return iii[(x1-1)*y+(y1-1)];
    }else
        throw out_of_range("out");
}
int DoubleSubscriptedArray::operator()(int x1,int y1)const{
    if (1<=x1<=x&&1<=y1<=y) {
        return iii[(x1-1)*y+(y1-1)];
    }else
        throw out_of_range("out");
}
bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray &d)const{
    if (this->iii==iii) {
        return true;
    }else return false;
}
bool DoubleSubscriptedArray::operator!=(const DoubleSubscriptedArray &d)const{
    return !((*this)==d);
}
int DoubleSubscriptedArray::getx(){
    return x;
}
int DoubleSubscriptedArray::gety(){
    return y;
}
istream &operator>>(istream &input,DoubleSubscriptedArray &d){
    for(int x=1;x<=d.getx();x++)
        for(int y=1;y<=d.gety();y++){
            input>>d(x,y);
        }
    return input;
}
ostream &operator<<(ostream &input,DoubleSubscriptedArray &d){
    for(int x=1;x<=d.getx();x++)
    {
        for(int y=1;y<=d.gety();y++)
            input<<setw(12)<<d(x,y);
        input<<endl;
    }
    return input;
}
