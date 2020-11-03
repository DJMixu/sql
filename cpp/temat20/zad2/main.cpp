#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
///Autor Michał Majczek
int main()
{
    srand(time(NULL));
    int tab[5][5];

    for(int i = 0; i<5; i++)
    {
        for(int j = 0; j<5; j++)
        {

            tab[i][j]=rand()%10;

        }

    }
     for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cout<<"\ntab=["<<i<<"] ["<<j<<"]= "<<tab[i][j];
        }
        cout<<endl;
    }
    return 0;
}
