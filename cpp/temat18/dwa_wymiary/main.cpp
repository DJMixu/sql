#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <new>
#include <ctime>

using namespace std;

int main()
{
    int wie, kol, i, j;
    cout<< "Podaj liczbe wierszy i kolumn tablicy:\n";
    cin>>wie>>kol;
    srand(time(NULL));
    int **tab;
    try
        {
            tab = new int *[wie];
        }
    catch(bad_alloc)
        {
            cout<<"Brak miejsca na utworzenie tablicy. Koncze prace";
            return -1;
        }
    for(i=0; i<wie; i++)
        try
            {
                tab[i] = new int [kol];
            }
        catch(bad_alloc)
            {
                cout<<"brak miejsca na utworzenie tablicy";
                return -1;
            }
        for (i=0; i<wie; i++)
            for(j=0; j<kol; j++)
            {
                tab[i][j] = rand()%101;
                cout<< setw(4)<<tab[i][j];
            }
            cout<<endl;
        for (i=0; i<wie; i++)
            {
                delete [] tab [i];
            }
        cin.ignore();
        getchar();


    return 0;
}
