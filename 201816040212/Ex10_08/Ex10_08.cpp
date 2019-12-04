//
//  main.cpp
//  Ex10_08
//
//  Created by MacBook Pro on 2019/11/21.
//  Copyright © 2019 MacBook Pro. All rights reserved.
//

#include <iostream>
#include "Complex.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    Complex c1(2,3);
    Complex c2(2,3);
    Complex c3=c1*c2;
    std::cout<<c1<<c2<<c3<<endl;
    std::cout<<(c1==c2)<<" "<<(c1!=c2)<<endl;
    return 0;
}
