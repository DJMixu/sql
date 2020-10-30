#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string.h>
#include <stdlib.h>


using namespace std;
///Autor Micha³ Majczek
int main()
{

    char tab[20];
    string linia;
    fstream plik;
    int x;
    int s=0;
    plik.open("dane.txt", ios::in);
    getline(plik,linia);
    x=stoi(linia);

    for(int i=0; i<x; i++)
    {

        getline(plik,linia);
        strcpy(tab, linia.c_str());

        if(tab[0]=='a')
        {
            s++;
        }

    }
    cout<<s;
    system("PAUSE");
    return 0;
}
