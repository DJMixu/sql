#include <iostream>

using namespace std;
//Autor Michal Majczek
int main()
{
        int n;
        cout<<"Podaj ile elementow w tablicy: ";
        cin>>n;
        int tab[n];
        for(int i=0; i<n; i++)
        {
        cout<<"tab["<<i<<"]=";
        cin>>tab[i];
        }
        int max;
        max=tab[0];
        for(int i=0; i<n; i++)
        {
            if(max<tab[i])
            max=tab[i];
        }
        cout<<"Najwieksza wartosc tablicy: "<<max;
        cout<<"\nineksy wart. max: ";
        for(int i=0; i<n; i++)
        {
           if(max==tab[i])cout<<i<<", ";
        }
         cout<<endl<<endl;
        int min;
        min=tab[0];
        for(int i=0; i<n; i++)
        {
            if(min>tab[i])
            min=tab[i];
        }
        cout<<"Najmniejsza wartosc tablicy: "<<min;
        cout<<"\nineksy wart. min: ";
        for(int i=0; i<n; i++)
        {
           if(min==tab[i])cout<<i<<", ";
        }
		cout<<"\nKoniec programu";
    return 0;
}
