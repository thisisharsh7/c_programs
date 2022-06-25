#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c,ave;
    printf("Enter three numbers: \n");
    scanf("%lf %lf %lf",&a,&b,&c);
    ave=(a+b+c)/3;
    printf("Average= %lf",ave);
    return 0;
}
