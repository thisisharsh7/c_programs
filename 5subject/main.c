#include <stdio.h>
#include <stdlib.h>

int main()
{
    int subject[5];
    int i=5;
    int sum=0;
    printf("Enter scores: ");
    while(i>0){

        scanf("%d",&subject[i]);
         sum+=subject[i];
    i--;

    }
    printf(" Sum of scores: %d",sum);

    return 0;
}
