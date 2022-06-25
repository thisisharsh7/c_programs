#include <stdio.h>
#include <stdlib.h>

int main()
{printf("Enter the Basic salary: ");
int money;
scanf("%d",&money);
double gross;
gross=money+money*0.3+money*1;
printf("Gross salary is: %lf",gross);
    return 0;
}
