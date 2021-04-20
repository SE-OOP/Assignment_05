#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
    Complex x;
    Complex y;
    Complex z;
    cin>>y;
    cin>>z;
    x=y*z;
    cout<<x;
    cout << ( ( y == z ) ? "  == " : "  != " );
    cout << ( ( y != z ) ? "  != " : "  == " );
}
