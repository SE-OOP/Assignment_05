//
//  main.cpp
//  Ex10_07
//
//  Created by MacBook Pro on 2019/11/21.
//  Copyright © 2019 MacBook Pro. All rights reserved.
//

#include <iostream>
#include "DoubleSubscriptedArray.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    DoubleSubscriptedArray d(1,3);
    cout<<d<<" "<<d(2,3,4)<<endl;
    d(1,1)=1;
    cin>>d;
    cout<<d<<" "<<d(2,3)<<endl;

    return 0;
}
