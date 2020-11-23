#include <iostream>

using namespace std;
///Autor Michał Majczek
int main()
{
    int n=5;
    char b;
	char a;
    while(n!=0)
    {

    cout<<"\nPodaj n: ";
    cin>>n;
	cout<<"\nPodaj a: ";
	cin>>a;
	cout<<"\nPodaj b: ";
	cin>>b;
    char tab[n][n];
    int x;
    if(n<6 || n>60)
        {
            return 5;
        }
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<n; j++)
            {
                if(j==i)
                {
                    tab[i][j]=b;
                }else
                    tab[i][j]=a;
            }
        cout<<endl;
        }
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cout<<tab[i][j];
        }

        cout<<endl;
    }



    }



    return 0;
}
