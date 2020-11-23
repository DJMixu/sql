#include <iostream>
#include <string>
using namespace std;
///Autor Michał Majczek

class czolg {
private:
    string nazwa;
    int ilosc_naboi;
    string kolor;
public:
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
/*void wlamanieDoCzolgu(czolg &ten)
{
    ten.nazwa="Slonik Bimbo";
    //ten.ilosc_naboi=5;
    ten.kolor="niewidzialny";
}*/
int main()
{
    czolg rudy102;
    rudy102.wpiszDane("rudy102",1,"zielony");
    rudy102.info();
//    wlamanieDoCzolgu(rudy102);
    rudy102.ognia();
    rudy102.info();
    return 0;
}
