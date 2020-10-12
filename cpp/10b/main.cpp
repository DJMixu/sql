#include <iostream>

using namespace std;
//Autor Micha³ Majczek

int main()
{
    float a,b,c,d,x,y;
    cin>>a>>b>>c>>d;
    x=a*b; y=c*d;
    if(x>y)cout<<"pierwszy jest wiekszy"<<endl;
    else if(x<y) cout<<"drugi jest wiekszy"<<endl;
    else cout<<"sa rowne"<<endl;
    return 0;
}
