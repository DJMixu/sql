#include <iostream>

using namespace std;
//Autor Micha³ Majczek

int main()
{
    int a;
    cin>>a;
    if(a%2!=0){
        if(a%5==0)cout<<"Nieparzysta podzielna przez 5"<<endl;
        else cout<<"Nieparzysta niepodzielna przez 5"<<endl;
    }else cout<<"Parzysta"<<endl;
    return 0;
}
