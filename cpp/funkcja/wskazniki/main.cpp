#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    short a,b;
    short *wsk_do_a, *wsk_do_b;
    wsk_do_a = &a;
    wsk_do_b = &b;
    a =5;
    *wsk_do_b = 7;
    cout<<"Zmienna a wspisujemy uzywajac wskaznika"<<endl<<"a = "<<*wsk_do_a;
    cout<<"\nZmienna b wspisujemy uzywajac jej nazwy"<<endl<<"b = "<<b;
    getch();
    return 0;
}
