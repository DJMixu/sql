#include <iostream>

using namespace std;
//Autor Micha³ Majczek
int main()
{
    int a;
    cin>>a;
    switch(a)
{

        case 1: {
        cout<<"Poniedzialek"<<endl;
        break;
        }
                case 2 :{
        cout<<"Wtorek"<<endl;
        break;
        }
                case 3: {
        cout<<"Sroda"<<endl;
        break;
        }
                case 4: {
        cout<<"Czwartek"<<endl;
        break;
        }
                case 5: {
        cout<<"Piatek"<<endl;
        break;
        }
                case 6: {
        cout<<"Sobota"<<endl;
        break;
        }
                case 7: {
        cout<<"Niedziela"<<endl;
        break;
        }
        default:{
        cout<<"podaj poprawna liczbe"<<endl;
        break;
        }


}
    return 0;
}
