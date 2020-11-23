#include <iostream>
#include <string>
///Michał Majczek
using namespace std;

class Psy
{
string imie;
int wiek;
public:
    Psy(string imie, int wiek)
    {
        this->imie = imie;
        this->wiek = wiek;
    }

    void przypisz()
    {
        cout<< "Pies: "<<imie;
        cout<<", Wiek: "<< wiek << " lat."<<endl;
    }
};



int main()
{
    Psy piesek1("Reks", 7);
    piesek1.przypisz();

    Psy piesek2("Azor", 3);
    piesek2.przypisz();


    return 0;
}
