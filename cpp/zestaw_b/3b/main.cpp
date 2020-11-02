#include <iostream>

using namespace std;
//Autor Micha³ Majczek

int main()
{
    int a;
    cin>>a;
    if(a%400==0 || (a%4==0 && a%100!=0) ) cout<<"Przestepny"<<endl;
    else cout<<"nieprzestepny"<<endl;
    return 0;
}
