#include <iostream>

using namespace std;
//Autor Micha³ Majczek
int main()
{
    int a;
    cin>>a;
    if(a>9 && a<100){
        if(a%2==0)cout<<"Parzysta"<<endl;
    else cout<<"Nieparzysta"<<endl;

    }
    else
    {
        cout<<"Nie dwucyfrowa"<<endl;
    }
    return 0;
}
