#include <stdio.h>
#include <stdlib.h>

int main()
{
    double c,f;
    printf("Enter Celsius: ");
    scanf("%lf", &c);
    f=(c*(9/5))+32;
    printf("farenhite= %lf",f);

    return 0;
}
