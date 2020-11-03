#include <iostream>

using namespace std;
///Autor Michał Majczek

int main()
{

    int n, m;
    cout << "Podaj liczbe wierszy: ";
    cin >> n;
    cout << "Podaj liczbe kolumn: ";
    cin >> m;
    cout << endl;
    int tab[n][m];
    if(n<10 && m<10)
    {

        for(int i=0; i<n; i++)
        {

            for(int j=0; j<m; j++)
            {

                cout << "tab[" << i << "][" << j << "]: ";
                cin >> tab[i][j];
            }
        }
        cout << endl<<endl;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cout << tab[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl<<endl;
        int max=0;
        max=tab[0][0];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m;j++)
            {
                if(max<tab[i][j])
                {
                    max=tab[i][j];

                }

            }

        }
        cout << "najwieksza liczba w tablicy: " << max<< endl;
    }
    else
        cout << "Niepoprawna ilosc kolumn i/lub wierszy!";
    cout << endl;
    return 0;
}
