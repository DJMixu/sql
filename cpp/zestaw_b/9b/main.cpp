#include <iostream>

using namespace std;
//Autor Micha³ Majczek

int main()
{
    float a,x,y;
    cin>>a>>x;
    if(a-x!=0){
            y=(a+x)/(a-x);
      cout<<y<<endl;
    }else cout<<"uwaga dzielenie przez 0"<<endl;
    return 0;
}
