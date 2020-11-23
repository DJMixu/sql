#include <iostream>
#include <string>
///Michał Majczek
using namespace std;
class osoba
{
    string nazwisko;
    string imie;
public:
    void UstawNazwisko(string nazwisko)
    {
        this->nazwisko = nazwisko;
    };
    string PobierzNazwisko()
    {
        return this->nazwisko;
    };
    void UstawImie(string imie)
    {
        this->imie = imie;
    };
    string PobierzImie()
    {
        return this->imie;
    };
};
int main()
{
    osoba postac1;
    osoba posatc2;
    posatc2.UstawNazwisko("Nowak");
    posatc2.UstawImie("Adam");
    cout << "postac2: " << posatc2.PobierzNazwisko() << " ";
    cout << posatc2.PobierzImie() << endl;

    return 0;
}
