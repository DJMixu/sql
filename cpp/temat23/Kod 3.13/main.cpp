#include <iostream>
#include <string>
using namespace std;
///Michał Majczek
class Psy
{
    string imie;
    string rasa;
    int wiek;
public:
    Psy();
    ~Psy()
    {
        cout << "Dekonstruktor dziala" << endl;
    };
    void wypisz();
};
Psy::Psy()
    :imie ("Kama"),
    rasa ("amstaf"),
    wiek (3)
{
    cout << "Konstruktor dziala!" << endl;
}
void Psy::wypisz()
{
   cout << "Imie psa: " << imie;
   cout << "\nRasa psa: " << rasa << endl;
}
int main()
{
    Psy piesek1;
    piesek1.wypisz();
    return 0;
}
