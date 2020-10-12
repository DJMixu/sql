#include <iostream>
#include <cstdlib>
#include <time.h>
#include <locale.h>

using namespace std;
//Autor Micha³ Majczek
int a,b,c=1;
int main()
{
    setlocale(LC_ALL,"");

    srand(time(NULL));
    a = rand()%100+1;
    cout<<"Pomyœla³em jak¹mœ liczbe od 1 do 100."<<a<<endl;
    while(a!=b){
        cin>>b;
        if(a==b){
            cout<<"uda³o sie zgad³eœ w "<<c;
        }else{
        if(a>b)cout<<"za ma³o"<<endl;
            else cout<<"za du¿o"<<endl;
            c=c++;
           }}


    return 0;
}
