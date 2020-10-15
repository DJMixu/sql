#include <iostream>

using namespace std;
//autor Michal Majczek
int main()
{
    int a;
    cin>>a;
    if(a<100000)
    {
        while(a<100000)
            cout<<a++;

    }
    return 0;
}
