#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
///Michał Majczek
int main()
{
    srand (time(NULL));
    int tabs[5][5];
    int tab[10]{0,0,0,0,0,0,0,0,0,0};
    int max;

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            tabs[i][j]=rand()%10+1;
            switch(tabs[i][j])
                {

                case 1: tab[0]++; break;
                case 2: tab[1]++; break;
                case 3: tab[2]++; break;
                case 4: tab[3]++; break;
                case 5: tab[4]++; break;
                case 6: tab[5]++; break;
                case 7: tab[6]++; break;
                case 8: tab[7]++; break;
                case 9: tab[8]++; break;
                case 10: tab[9]++; break;
                }
        }
    }
    cout<<endl<<endl;
     for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cout<<"tab["<<i<<"]["<<j<<"]="<<tabs[i][j];
            cout<<endl;
        }

    }
    cout<<endl<<endl;
    max=tab[0];
    for(int i=0; i<10; i++)
    {
        cout<<" "<<i+1<<" jest "<<tab[i]<<endl;
        if(tab[i]>max)
            max=tab[i];

    }
    cout<<endl<<"maks to";
       for(int i=0; i<10; i++)
    {
        if(tab[i]==max)
        {
            cout<<" liczba "<<i+1<<endl;
        }

    }




    return 0;
}
