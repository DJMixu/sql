#include <iostream>
using namespace std;
///Autor Michał Majczek
int main()
{


    int tab[2][4];
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout<<"\n Podaj tab=["<<i<<"] ["<<j<<"]= ";
            cin>>tab[i][j];
        }
    }
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout<<"\n Podaj tab=["<<i<<"] ["<<j<<"]= "<<tab[i][j];
        }
        cout<<endl;
    }
    return 0;
}
