#include <iostream>

using namespace std;
//Autor Michal Majczek

int f(int n)
{
    if(n==0) return 3;
    else return f(n-1)+2;
}
long int pot(int p, int w)
{
    if(w==0)return 1;
    else return p*pot(p,w-1);
}
long int fib(int n)
{
    if (n==1 || n==2 ) return 1;
    else return fib(n-1)+fib(n-2);
}
long int sil(int n)
{
    if(n==0) return 1;
    else return n*sil(n-1);
}
int main()
{


    cout<<f(3)<<endl;
    cout<<pot(2,10)<<endl;
    cout<<fib(8)<<endl;
    cout<<sil(6);
    return 0;
}
