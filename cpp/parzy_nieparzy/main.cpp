#include <iostream>

using namespace std;

int main()
{
    int p=0,n=0,a;
    do{
        cin>>a;
        if(a>9&&a<100)
        {
            if(a%2==0)
            {
                p+=a;
            }else
            {
                n+=a;
            }
        }
        }while(a!=0);
        cout<<"Parzyste "<<p<<" Nieparzyste "<<n<<endl;

    return 0;
}
