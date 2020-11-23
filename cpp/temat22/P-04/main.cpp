#include <iostream>
///Autor Michał Majczek
using namespace std;
class Liczba_Calkowita
{
    int liczba;

public:
    void wyswietlLiczbe()
    {
        cout << "liczba = " << liczba << endl;
    }
    void pobierzLiczbe(int a)
    {
        liczba = a;
    }
    int zwracajLiczbe()
    {
        return liczba;
    }
    int wartosc_bezwzgledna()
    {
        if(liczba>0)
            return liczba;
        else
            return -liczba;
    }
};

int main()
{
    Liczba_Calkowita mojaLiczba;
    mojaLiczba.pobierzLiczbe(-123);
    mojaLiczba.wyswietlLiczbe();
    cout << "Moja magiczna liczba wynosi: " << mojaLiczba.zwracajLiczbe();
    cout << "\nWartosc bezwzgledna: " << mojaLiczba.wartosc_bezwzgledna();
    cout << "\n======================" << endl;
    return 0;
}
