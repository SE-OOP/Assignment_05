#include <iostream>
using std::cout;
using std::cin;
#include "Complex.h"
int main()
{
   Complex x, y( 4.3, 8.2 ), z( 3.3, 1.1 ), k;
   cout << "Enter a complex number in the form: (a, b) "<<endl;
   cin >> k;
   cout << "x: " << x << "\ny: " << y << "\nz: " << z << "\nk: "<< k <<endl; 
   x = y + z; 
   cout << "\nx = y + z:\n" << x << " = " << y << " + " << z << endl;
   x = y - z; 
   cout << "\nx = y - z:\n" << x << " = " << y << " - " << z << endl;
   x = y * z; 
   cout << "\nx = y * z:\n" << x << " = " << y << " * " << z << endl;
  if ( x != k ) 
      cout << x << " != " << k << '\n';
   cout << '\n';
   if ( x == k ) 
      cout << x << " == " << k << '\n';
   return 0;
} // end main
