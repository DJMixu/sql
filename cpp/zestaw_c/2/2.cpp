#include <iostream>

using namespace std;
//autor Michal Majczek
int main()
{
    int a=0;
    while(a<500000){
    if(a%10==0)cout<<endl;
        cout<<a++<<" ";}
    return 0;
}
