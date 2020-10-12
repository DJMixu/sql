#include <stdio.h>


//autor Michal Majczek
int main()
{
    char znak;
    printf("Podaj ulubiony znak");
    scanf("%c", &znak);
    printf("Moj ulubiony znak: %c\n\n", znak);
    printf("Witaj w moim swiecie\n");

    int a,b;

    printf("Podaj a: ");
    scanf("%d",&a);
    printf("Podaj b: ");
    scanf("%d",&b);

    int s=a+b;

    printf("suma liczb a+b=%d\n",s);
    printf("%d+%d=%d\n",a,b,s);

    float c;
    printf("Podaj liczbe rzeczywista: ");
    scanf("%f", &c);
    printf("Podales liczbe: %.2f\n\a", c);

    return 0;
}
