#include <iostream>

using namespace std;
//Autor Michal Majczek
int main()

{

    int tab[5];
   //int tab[5]={23,56,45,7};
    for(int i=0; i<5; i++)
    {

        cout<<"Podaj liczbe tab["<<i<<"]=";
        cin>>tab[i];
    }
     for(int i=0; i<5; i++)
    {

        cout<<"tab["<<i<<"]="<<tab[i]<<endl;

    }
    return 0;
}
