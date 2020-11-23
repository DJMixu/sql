#include <iostream>
#include <string>
using namespace std;
///Autor Michał Majczek
int a;
string wk,kw;
class telefon {
public:
    string nazwa;
    int cena,rok;
    string kolor;
    string marka;
void Dane(string naz, int cen, int r, string mar, string kol){
    nazwa=naz;
    cena=cen;
    rok=r;
    marka=mar;
    kolor=kol;
}
void wypisz()
{
     cout<<"Marka: "<<marka;
     cout<<"\nModel: "<<nazwa;
     cout<<"\nCena: "<<cena;
     cout<<"\nKolor: "<<kolor;
}
void pomaluj(string kol)
{
    kolor=kol;
}
};
int lista()
{
    cout<<"\n1.Samsung Galaxy 8";
    cout<<"\n2.Samsung Galaxy 9";
    cout<<"\n3.Samsung Galaxy 10";
    cout<<"\n4.Iphone X";
    cout<<"\n5.Iphone XS";
}
int wybor()
{
    cout<<"\nWybierz telefon ";
    cin>>a;
    switch(a)
        {
            case 1: cout<<"\n1.Samsung Galaxy 8"; break;
            case 2: cout<<"\n2.Samsung Galaxy 9"; break;
            case 3: cout<<"\n3.Samsung Galaxy 10"; break;
            case 4: cout<<"\n4.Iphone X"; break;
            case 5: cout<<"\n5.Iphone XS"; break;
            default:cout<<"Podaj poprwany numer\n"; wybor();
        }
      return a;
}
int main()
{
    cout<<"Witaj w moim sklepie z telefonami\n\n//////////////////////////////////////////////////////\n\n";
    cout<<"To sa telefony dostepne w naszym sklepie:\n\n///////////////////////////////////////////////////\n\n";
    telefon SG8;
    SG8.Dane("Galaxy 8",1200,2018,"Samsung","czarny");
    telefon SG9;
    SG9.Dane("Galaxy 9",1700,2019,"Samsung","czarny");
    telefon SG10;
    SG10.Dane("Galaxy 10",2200,2020,"Samsung","czarny");
    telefon IPX;
    IPX.Dane("Iphone X",3200,2019,"Apple","czarny");
    telefon IPXS;
    IPXS.Dane("Iphone XS",4200,2020,"Apple","czarny");
    lista();
    wybor();
    cout<<"\n\nDane telefonu\n";
    switch(a)
        {
            case 1: SG8.wypisz();break;
            case 2: SG9.wypisz();break;
            case 3: SG10.wypisz();break;
            case 4: IPX.wypisz();break;
            case 5: IPXS.wypisz();break;
        }
    cout<<"\n\nCzy chcialbys zmienic kolor ";
    cin>>wk;
    if(wk=="tak"||wk=="Tak")
    {
        cout<<"\nPodaj kolor: ";
        cin>>kw;
        cout<<"\nTwoje zamowienie \n";
         switch(a)
        {
            case 1: SG8.pomaluj(kw);break;
            case 2: SG9.pomaluj(kw);break;
            case 3: SG10.pomaluj(kw);break;
            case 4: IPX.pomaluj(kw);break;
            case 5: IPXS.pomaluj(kw);break;
        }
        switch(a)
        {
            case 1: SG8.wypisz();break;
            case 2: SG9.wypisz();break;
            case 3: SG10.wypisz();break;
            case 4: IPX.wypisz();break;
            case 5: IPXS.wypisz();break;
        }
    }
    cout<<"\n\n///////////////////////////////////////////////////////";
    cout<<"\n\n Dzienkujemy za wybor telefonu w naszym sklepie\n";
    return 0;
}
