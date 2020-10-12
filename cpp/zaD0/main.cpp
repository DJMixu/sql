#include <iostream>
#include <cstdlib>
#include <locale.h>



using namespace std;
string imie;
int wiek;

int main()
{
    setlocale(LC_CTYPE,"Polish");
    cout << "Podaj swoje imie:";
    cin >> imie;
    cout<<endl<<"Witaj "<<imie<<endl<<"Ile masz lat: ";
    cin>>wiek;
    cout<<endl<<"Masz "<<wiek<<"lat.";
    system("pause");

    return 0;
}
