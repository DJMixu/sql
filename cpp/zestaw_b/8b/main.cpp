#include <iostream>

using namespace std;
//Autor Micha³ Majczek

int main()
{
    const float limit=5000;
    float kwota;
    cin>>kwota;
    if(kwota<limit)cout<<"Akcpetacja"<<endl;
    else cout<<"Odrzucenie"<<endl;
    return 0;
}
