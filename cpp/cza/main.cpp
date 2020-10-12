#include <iostream>

using namespace std;

int g,m,s,t;

//Autor: Micha³ Majczek
int main()
{

    cin>>t;

g=t/3600;
m=t%3600/60;
s=t%60;


    cout <<g<<"g"<<m<<"m"<<s<<"s";
    return 0;
}
