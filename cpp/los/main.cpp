#include <iostream>
#include <cstdlib>
#include <time.h>
#include <locale.h>

using namespace std;
//Autor Micha� Majczek
int a,b,c=1;
int main()
{
    setlocale(LC_ALL,"");

    srand(time(NULL));
    a = rand()%100+1;
    cout<<"Pomy�la�em jak�m� liczbe od 1 do 100."<<a<<endl;
    while(a!=b){
        cin>>b;
        if(a==b){
            cout<<"uda�o sie zgad�e� w "<<c;
        }else{
        if(a>b)cout<<"za ma�o"<<endl;
            else cout<<"za du�o"<<endl;
            c=c++;
           }}


    return 0;
}
