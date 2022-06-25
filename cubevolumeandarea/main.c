#include <stdio.h>
#include <stdlib.h>

int main()
{
    double l,s,v;
printf("Enter the length of side of the cube: ");
scanf("%lf",&l);
s=6*l*l;
v=l*l*l;
printf("%lf and %lf is the required surface area and volume of the cube.",s,v);


    return 0;
}
