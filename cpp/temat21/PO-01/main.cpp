#include <iostream>

using namespace std;
///Autor Michał Majczek
class czolg
{
    public:
        int ilosc_naboi;
        string kolor;

};

int main()
{
    czolg rudy102;
    cout << "Jaki kolor ma czolg? \n";
    cin >> rudy102.kolor;
    cout << "Ile naboi wiezie Rudy? \n";
    cin >> rudy102.ilosc_naboi;
    cout << "---------------------------\n";
    cout << "Rudy wiezie: " << rudy102.ilosc_naboi << " naboi \n";
    cout << "Rudy ma kolor: " << rudy102.kolor << "\n";
    return 0;
}
