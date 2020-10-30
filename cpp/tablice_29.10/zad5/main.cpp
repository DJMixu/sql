#include <iostream>

using namespace std;
///Autor Michal Majczek
int main()
{
    int n;
    cout<<"Podaj n ";
    cin>>n;
    int tab[n][3];
     for(int i = 0; i<n; i++)
    {
        cout<<"\n Podaj n: ";
        cin>>tab[i][0];
    }

     for(int i = 0; i<n; i++)
    {
        cout<<tab[i][0]<<" "<<tab[i][0]*tab[i][0]<<" "<<tab[i][0]*tab[i][0]*tab[i][0]<<"\n";
    }
    return 0;
}
