#include <iostream>

using namespace std;
float a,b,c;
float sr;
float suma;
long x=1;
int main()
{
    cout<<"Program oblicza pole trapezu"<<endl<<"autor: Michal Majczek"<<endl<<"===================="<<endl<<"Podaj a: ";
    cin>>a;
    cout<<"Podaj b: ";
    cin>>b;
    cout<<"Podaj wysklosc: ";
    cin>> c;
    cout<<"Pole trapezu to: "<<((a+b)*c)/2;


    return 0;
}
