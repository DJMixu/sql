#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string.h>
#include <stdlib.h>


using namespace std;
///Autor Michał Majczek
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
    cout<<"W pliku znajduje sie "<<s<<" slow na litere 'a'\n\n";
    system("PAUSE");
    return 0;
}
