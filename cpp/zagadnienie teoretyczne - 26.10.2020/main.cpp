#include <iostream>
#include <windows.h>
///Michał Majczek
using namespace std;
void trojdzwiek(int ton, int czas);
void randomdzwiek(int czas);
double parabola(double x,double a,double b,double c);
int main(int argc, char *argv[])
{
    trojdzwiek(1000,100);
    trojdzwiek(4000,100);
    trojdzwiek(8000,100);

    Sleep(1000);
    randomdzwiek(5000);

    Sleep(1000);
    double a,b,c,x,y;
    cout<<"Podaj 3 wspolczynniki paraboli a,b,c: ";
    cin>>a>>b>>c;
    cout<<"Podaj x, dla ktorego nalezy wyliczyc wartosc paraboli: ";
    cin>>x;
    y=parabola(x,a,b,c);
    cout<<a<<"*x*x+"<<b<<"*x+"<<x<<"="<<y<<endl;
    return 0;
}
void trojdzwiek(int ton, int czas)
{
    int t = czas/3;
    Beep(ton/2,t);
    Beep(ton,t);
    Beep(ton*2,t);
}
void randomdzwiek(int czas)
{
    int dt = 100;
    int il = czas/dt;
    int ton;
    for(int i =0; i<il;++i)
    {
        ton = 1000+rand()%5000;
        Beep(ton,dt);
    }
}
double parabola(double x,double a,double b,double c)
{
    return a*x*x+b*x+c;
}
