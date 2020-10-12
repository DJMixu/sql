#include <iostream>
#include <locale.h>
using namespace std;
//Autor Micha³ Majczek
int main()
{
    setlocale(LC_ALL,"");
    int i=7;
    while(1){
        cout<<"Pêtla, i"<<i<<"\n";
        i = i-1;
        if (i<5){
            cout<<"Przerwanie pêtli !"; break;
        }
    }
    return 0;
}
