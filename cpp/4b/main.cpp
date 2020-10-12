#include <iostream>
#include <math.h>
using namespace std;
//Autor Micha³ Majczek

int main()
{
    int a,b,c,y;

    cin>>a>>b>>c;
    if(c>=b && b>=a && a>0){
        if(c==b || a==c || b==a)
        {
           if(c==b && b==a)cout<<"trojkat rownoboczny"<<endl;
           else cout<<"trojkat rownoramienny"<<endl;
        }else{
    y=pow(c,2);
            if( pow(a,2)+pow(b,2)==y){
                cout<<"jest to trojkat prostokatny"<<endl;
            }else{
            cout<<"zaden z powyzszych"<<y<<endl;
            }
        }
    }else cout<<"Podaj poprawne wymiary"<<endl;

    return 0;
}
