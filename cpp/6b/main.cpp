#include <iostream>
#include <math.h>
using namespace std;
//Autor Micha³ Majczek

int main()
{
    float a,b,c;
    cin>>a>>b>>c;
    if(a>0 && b>0 && c>0){
    if( pow(a,2)+pow(b,2)==(c*c) || pow(c,2)+pow(b,2)==(a*a) || pow(a,2)+pow(c,2)==(b*b)){
                cout<<"moga stworzyc"<<endl;
            }else{
            cout<<"nie moga stworzyc"<<endl;}}else cout<<"Podaj poprawne liczby"<<endl;
    return 0;
}
