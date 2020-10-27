#include <iostream>
#include <iomanip>
#include <cstdio>
#include <new>
using namespace std;
int main()
{
    float *tab = NULL;
    cout << "lle Liczbe wpisujesz do tablicy ";
    int ile;
    float liczba;
    cin >> ile;
    try
        {
            tab = new float [ile];
        }
    catch(bad_alloc)
        {
            cout << "brak miejsca na utworzenie tablicy";
            cin.ignore( );
            getchar();
            return -1;
        }

        for (int i=0; i<ile; i++)
        {
            cout << "Podaj Liczbe ";
            cin >> liczba;
            *(tab+i) = liczba;
        }
    cout << endl << "Wypisuje zawartosc tablicy:" << endl;
    for (int i=0; i<ile; i++)
        cout<< setw(6) << *(tab+i);
    delete [] tab;
    cin.ignore();
    getchar;
    return 0;

}


