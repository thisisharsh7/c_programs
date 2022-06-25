#include <stdio.h>
#include <stdlib.h>

int main()
{
//    printf("Enter the length of the side: ");
// double length;
// scanf("%lf", &length);
// double area;
// area=(length*length*1.732)/4;//since area=(3^1\2*a^2)/4 and 3^1\2=1.732
// printf("Area of the Equilateral Triangle: %lf",area);
int b=1;
b=b%998244353;
b++;
b=b%998244353 ;
printf("%d",b);
    return 0;
}
