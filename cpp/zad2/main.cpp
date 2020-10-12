#include <iostream>

using namespace std;
string nazwa;
float cena;
int ilosc;

int main()
{
    cout << "Pofaj nmazwe produktu: ";
    cin>>nazwa;
    cout<<"Podaj cene produktu "<<nazwa<<": ";
    cin>> cena;
    cout<<"Podaj ilosc: ";
    cin>>ilosc;
    cout<<"======ZAMOWIENIE======"<<endl<<endl<<"Zamowiles: "<<nazwa<<endl<<endl<<"Ilosc: "<<ilosc<<endl<<endl<<"Do zaplaty: "<<cena*ilosc;
        return 0;
}
