#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{

    cout<<"Create two complexs"<<endl;
    Complex complex1;
    Complex complex2;
    cout<<"Finish"<<endl;
    cout<<"Please give the value of each complex"<<endl;
    cout<<"complex1 is"<<endl;
    cin>>complex1;
    cout<<"complex2 is"<<endl;
    cin>>complex2;
    cout<<complex1<<" + "<<complex2<<" = "<<complex1 + complex2<<endl;
    cout<<complex1<<" - "<<complex2<<" = "<<complex1 - complex2<<endl;
    cout<<complex1<<" * "<<complex2<<" = "<<complex1 * complex2<<endl;
    cout<<"Weather complex1 is complex2"<<endl;
    if(complex1 == complex2)
        cout<<"Yes"<<endl;
    else
        cout<<"NO"<<endl;

}
