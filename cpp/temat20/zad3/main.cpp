#include <iostream>

using namespace std;
///Autor Michał Majczek
int main()
{
    int n=5;
    while(n!=0)
    {

    cout<<"\nPodaj n: ";
    cin>>n;
    if(n<6 || n>60)
        {
            return 5;
        }
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {

            if(j==0 || j==n-1)
            {
                cout<<'b';
            }else
            {
                cout<<'a';
            }
        }
        cout<<endl;
    }



    }



    return 0;
}
