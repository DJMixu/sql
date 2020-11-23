#include <iostream>
///Autor Michał Majczek
using namespace std;

class odcinek
{
  public:
      int ax=0,ay=0,bx=0,by=0;
      odcinek()
      {
          ax=7;
          ay=0;
          bx=7;
          by=0;
      }
      odcinek(int x, int y)
      {
          ax=0;
          ay=0;
          bx=x;
          by=y;
      }
      odcinek(int x,int y, int z, int c)
      {
          ax=x;
          ay=y;
          bx=z;
          by=c;
      }
      void wyzeruj()
      {
          ax=0;
          ay=0;
          bx=0;
          by=0;
          cout<<"Aktywowano metode wyzeruj\n";
      }
      void przesun(int px, int py, int pz, int pc)
      {
          ax+=px;
          ay+=py;
          bx+=pz;
          by+=pc;
          cout<<"Akrywowano metode przesun\n";
      }
      void wypisz()
      {
          cout<<"\nAx = "<<ax;
          cout<<"\nAy = "<<ay;
          cout<<"\nBx = "<<bx;
          cout<<"\nBy = "<<by<<endl;
      }
};
int main()
{
    odcinek a;
    a.wypisz();
    a.przesun(1,2,3,4);
    a.wypisz();
    a.wyzeruj();
    a.wypisz();
    odcinek b(1,2);
    b.wypisz();
    odcinek c(3,3,7,2);
    c.wypisz();
    return 0;
}
