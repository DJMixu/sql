#include <iostream>
#include <string>
using namespace std;
///Michał Majczek
    class osoba
    {
        string nazwisko;
        string imie;
        int wiek;
    public:
        void UstawDane(string nazwisko, string imie, int wiek)
        {
            this->nazwisko = nazwisko;
            this->imie = imie;
            this->wiek = wiek;
        }
        void WypiszDane();
    };
    void osoba::WypiszDane()
    {
        cout << "Nazwisko: " << nazwisko;
        cout << "\nImie: " << imie;
        cout << "\nWiek: " << wiek << endl;
    }
    int main()
    {
        osoba *uczen1 = new osoba;
        uczen1->UstawDane("Nowak","Pawel",17);
        uczen1->WypiszDane();
        delete uczen1;
    return 0;
    }

