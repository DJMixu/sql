#include <iostream>
#include <math.h>
using namespace std;
//Autor Micha� Majczek

int main()
{
    float a,b,c;

        cin>>a>>b>>c;
    if(a+b>c && a+c>b && b+c>a ){
        if(c==b || a==c || b==a)
        {
           if(c==b && b==a)cout<<"trojkat rownoboczny"<<endl;
           else cout<<"trojkat rownoramienny"<<endl;
        }else{

            if( (pow(a,2)+pow(b,2)==(c*c)) || (pow(c,2)+pow(b,2)==(a*a)) || (pow(a,2)+pow(c,2)==(b*b))){
                cout<<"jest to trojkat prostokatny"<<endl;
            }else{
            cout<<"zaden z powyzszych"<<endl;
            }
        }
    }else cout<<"Podaj poprawne wymiary"<<endl;



    return 0;
}
