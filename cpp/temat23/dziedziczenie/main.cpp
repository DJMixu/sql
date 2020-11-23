#include <iostream>
#include <conio.h>

using namespace std;
///Michał Majczek
class Zwierze
{

    string nazwa;
    int iloscNog;

public:
    Zwierze(string _nazwa, int _iloscNog);
    void jedz();
    void spij();
};

Zwierze::Zwierze(string _nazwa, int _iloscNog)
{
    nazwa = _nazwa;
    iloscNog = _iloscNog;
    cout << "Tworzymy obiekt o nazwie " << nazwa << endl;
}

void Zwierze::jedz()
{
    cout << "Zwierze je\n";
}

void Zwierze::spij()
{
    cout << "Zwierze spi\n";
}

class Ptak : public Zwierze
{
public:
    Ptak(string nazwa, int nog);
    void lec();
    void spiewa();
};

Ptak::Ptak(string nazwa, int nog):Zwierze(nazwa, nog)
{
    cout << "Tworzymy obiekt typu ptak\n";
}

void Ptak::lec()
{
    cout << "Ptak leci\n";
}

void Ptak::spiewa()
{
    cout << "Ptak spiewa\n";
}

int main()
{
    Zwierze zwierz("swidrzyk", 1);
    zwierz.jedz();
    zwierz.spij();
    cout << "---------------\n";
    getch();
    Ptak ptak("sikorka", 2);
    ptak.jedz();
    ptak.spij();
    ptak.lec();
    ptak.spiewa();
    cout << "---------------\n";
    return 0;
}
