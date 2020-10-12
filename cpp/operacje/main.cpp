#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int a,b,s;
    char z;
    printf("Podaj twoj ulubiony znak ");
    scanf("%c",&z);
    printf("Twoj ulubiony znak %c\n\n\n",z);
    printf("Podaj a: ");
    scanf("%d", &a);
    printf("Podaj b: ");
    scanf("%d", &b);
    s=a+b;
    printf("Suma a+b=%d\n",s);
    printf("Suma %d+%d=%d\n",a,b,s);
    float c;
    printf("Podaj liczbe rzeczxywista ");
    scanf("%f", &c);
    printf("C=%.2f",c);

    //cout << "Hello world!" << endl;

    return 0;
}
