#include <iostream>
#include <locale.h>
using namespace std;
//Autor Micha� Majczek
int main()
{
    setlocale(LC_ALL,"");
    int i=7;
    while(1){
        cout<<"P�tla, i"<<i<<"\n";
        i = i-1;
        if (i<5){
            cout<<"Przerwanie p�tli !"; break;
        }
    }
    return 0;
}
