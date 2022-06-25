#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c;
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a>b && a>c){
        printf("%lf is the greatest.",a);
        }
    else if(b>a && b>c){printf("%lf is the greatest.",b);}
    else{printf("%lf is the greatest.",c);}
    //or we can do in this way too
    /*if(a>b){
        if(c>a){printf("%lf is the greatest.",c);}
        else{printf("%lf is the greatest.",a);}
        }
        else{printf("%lf is the greatest.",b);}*/
    return 0;
}
