#include <iostream>

using namespace std;
//Autor Michal Majczek

int main()
{
    int n,m;

    cout<<"Podaj ile wierszy: ";
    cin>>n;
    cout<<"Podaj ile kolumn: ";
    cin>>m;
    char tab[n][m];
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
    {
        cout<<"Podaj tab"<<i<<"] ["<<j<<"]=";
        cin>>tab[i][j];
    }
    for(int i=0; i<n; i++)
    {
         for(int j=0; j<m;j++)
            {
                cout<<tab[i][j]<<" ";
            }
            cout<<endl;

    }
    return 0;
}
