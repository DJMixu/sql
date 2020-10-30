#include <iostream>

using namespace std;
///Autor Michal Majczek
int main()
{
    int n,m;
    cout<<"Podaj wymiary ";
    cin>>n>>m;
    int tab[n][m];
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            cout<<"\n Podaj "<<j<<" liczbe z wiersza "<<i<<": ";
            cin>>tab[i][j];
        }

    }
    cout<<"\nx,y \nx-wiersz\ny-kolumna\n";
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            if(tab[i][j]%3==0)
            {
                if(tab[i][j]%5==0)
                    {
                        cout<<i<<","<<j<<" ";
                    }
            }
        }
    }
    return 0;
}
