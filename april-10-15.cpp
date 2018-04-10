#include<iostream>
using namespace std;
int main()
{
    int p,r,t,i;

    cout << "\n\n Calculate the simple interest : \n";
    cout << "-------------------------------------\n";

    cout << " Input the principle : ";
    cin >> p;

    cout << " Input the rate of interest : ";
    cin >> r;

    cout << " Input the time : ";
    cin >> t;

    i=(p*r*t)/100;

    cout << " The simple interest for the amount "<<p<<" for "<<t<<" years @ "<<r<<" % is : "<<i<<endl;
    cout <<endl;


    return 0;
}
