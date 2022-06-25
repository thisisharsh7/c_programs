#include <stdio.h>
#include <stdlib.h>

int main()
{ double p,r,t;
  printf("Enter the Principal Amount: ");
  scanf("%lf",&p);
  printf("Enter the rate: ");
  scanf("%lf",&r);
  printf("Enter the time: ");
  scanf("%lf",&t);
  double x=p*r*t*0.01;//it can be written as (p*r*t)\100

  printf("Simple interest= %lf",x);
    return 0;
}
