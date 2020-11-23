#include <iostream>

using namespace std;

//autor Marcin Majborski

class car{
public:
    string marka;
    string model;
    int ilosc_koni;
    string kolor;
    int cena;


    void dane(string mar, string mod, int il, string kol, int cen){
        marka=mar;
        model=mod;
        ilosc_koni=il;
        kolor=kol;
        cena=cen;
}

    void info(){
        cout<<"Witam tutaj "<<marka<<". Zapraszam do srodka."<<endl;
        cout<<"Jestem: " <<marka<<" "<<model<<"."<<endl;
        cout<<"Kolor: "<<kolor<<endl;
        cout<<"Ilosc koni: "<<ilosc_koni<<"HP"<<endl;
        cout<<"Cena: "<<cena<<" EURO"<<endl;
    }

};

int xd(int a, int b)
{


        cout<<"Oto twoj nowy Mercedes."<<endl;
        cout<<"Czy chcesz zrobic tuning? Kosztuje on 10 000 EURO."<<endl;
        cin>>b;

        cout<<"Teraz twoj samochod ma "<<a + 200<<"HP."<<endl;
        cout<<"Laczna cena samochodu wynosi: "<<b + 10000<<"EURO"<<endl;
}

int main()
{
    car gtr;
    gtr.dane("Mercedes-AMG", "GT63S", 639, "bialy", 250000);
    gtr.info();
    cout<<endl;

    car Pista;
    Pista.dane("Ferrari", "488 Pista", 710, "Rosso corsa (czerwony)", 280000);
    Pista.info();
    cout<<endl;

    car Huracan;
    Huracan.dane("Lamborghini", "Huracan Performante", 640, "Kanarkowy (zielony)", 257000);
    Huracan.info();
    cout<<endl;

    car GKlasaB;
    GKlasaB.dane("Mercedes-AMG BRABUS", "G Klasa 900", 887, "Matowy czarny", 510000);
    GKlasaB.info();
    cout<<endl;
    cout<<"============================================================================="<<endl;
    cout<<endl;

    int a;

    cout<<"Wybierz samochod, ktory chcesz kupic."<<endl;
    cin>>a;
    cout<<"Wybrales "<<a<<" samochod."<<endl;

    cout<<endl;
    cout<<"============================================================================="<<endl;
    cout<<endl;

    string b;
    if(b=="tak"||"Tak")
        {
        switch(a)
            {
                case 1: xd(gtr.ilosc_koni,gtr.cena);
            }

        }



    cout<<endl;
    cout<<"============================================================================="<<endl;
    cout<<endl;

    return 0;
}
