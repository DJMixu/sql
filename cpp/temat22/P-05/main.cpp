#include <iostream>
#include <string>
using namespace std;
///Autor Michał Majczek

class czolg {
public:
    string nazwa;
    int ilosc_naboi;
    string kolor;
    czolg()
    {
        nazwa = "bez nazwy";
        ilosc_naboi = 0;
        kolor = "czerwony";
        cout << "Konstruktor klasy czolg zadzialal" << endl;
    }
    czolg(string naz)
    {
        nazwa = naz;
        ilosc_naboi = 0;
        kolor = "czerwony";
        cout << "Zadzialal konstruktor numer 2" << endl;
    }
    ~czolg()
    {
        cout << "Obiekt zostal zniszczony" << endl;
    }

    void info(){
    cout<<"\nJestem czolgiem nazywam sie "<<nazwa<<". \n";
    cout<<"kolor: "<<kolor<<endl;
    cout<<"amunicja: "<<ilosc_naboi<<endl;
    }

void wpiszDane(string naz, int il, string kol){
    nazwa=naz;
    ilosc_naboi=il;
    kolor=kol;
}
void zaladuj(int a){
    ilosc_naboi+=a;
    if(ilosc_naboi<0) ilosc_naboi=0;

}
void pomaluj(string kol)
{
    kolor=kol;
    cout<<"pomalowalem czolg na kolor "<<kolor<<endl;
}
void ognia(){
    if(ilosc_naboi>0){
        cout<<"BUUUMMM!!\n";
        ilosc_naboi--;
    }else
    cout<<"Brak amunicji";
}
};
class helikopter:public czolg
{
public:
    void start()
    {
        cout<<"Wystartowalem i lece"<<endl;
    }
    void laduj()
    {
        cout<<"Wyladowalem. Zapraszam ponownie"<<endl;
    }
};

int main()
{
    helikopter Harold;
    Harold.wpiszDane("Harold",10,"niebieski");
    Harold.ognia();
    Harold.start();
    Harold.laduj();
    return 0;
}
