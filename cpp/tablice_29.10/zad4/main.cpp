#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
///Autor Michal Majczek
int main()
{
    srand(time(NULL));
    int n,m,s=0;
    cout<<"Podaj wymiary ";
    cin>>n>>m;
    int tab[n][m];
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {

            tab[i][j]=rand()%6+1;

        }

    }
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
           cout<<tab[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {

            if(i<n-1 && j==0 && i>0)
            {
                s+=tab[i][j];
            }
            if(i==n-1 || i==0)
            {
                s+=tab[i][j];
            }
            if(i<n-1 && j==m-1 && i>0)
            {
                s+=tab[i][j];
            }
        }

    }
    cout<<"\n\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n  Wynik to "<<s;
    return 0;
}
