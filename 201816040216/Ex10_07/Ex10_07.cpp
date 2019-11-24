
#include <iostream>
#include <stdexcept>

#include "DoubleSubscriptedArray.h"

using namespace std;

int main()
{

   DoubleSubscriptedArray integers1(3,5); // seven-element Array

   // input and print integers1 and integers2
   cout << "\nEnter 19 integers:" << endl;
   cin >> integers1;

   cout << "\nAfter input, the DoubleSubscriptedArrays contain:\n"
      << "integers1:\n" << integers1;

   // create DoubleSubscriptedArray integers3 using integers1 as an
   // initializer; print size and contents

   cout<<integers1(2,5);

} // end main
