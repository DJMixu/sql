#include <iostream>

using namespace std;
///Autor Michal Majczek
int main()
{
    int n,m,r,s=0;
    cout<<"Podaj wymiary ";
    cin>>n>>m;
    int tab[n][m];
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            cout<<"\n tab["<<i<<"]["<<j<<"]=";
            cin>>tab[i][j];
        }

    }
    cout<<"Podaj numer wiersza: ";
    cin>>r;


    for(int i = 0; i<m; i++)
    {

        s+=tab[r][i];
    }
    cout<<"Suma wiersza "<<r<<" = "<<s;
    return 0;
}
