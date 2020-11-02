#include <iostream>

using namespace std;
//Autor Micha³ Majczek
int a,b,sum;
int main()
{


    cin>>a>>b;
    if (a%2 == 0 && b%2 == 0)
    {
      if(a>b)cout<<"A"<<endl;
      else cout<<"B"<<endl;
    }else
    {
    sum=(a%2)+(b%2);
    if(sum==2)
    cout<<"obie sa nieparzyste"<<endl;
    else{
        if(a%2==0)cout<<"B jest nieparzysta"<<endl;
        else cout<<"A jest nieparzysta"<<endl;
    }
    }

    return 0;
}
