// Write a program using structure to compute sum of two Complex numbers.

#include<stdio.h>

struct stComplex
{
   int real,img;
    /* data */
};

int main(){
    struct stComplex c1,c2,res;
    c1.real = 10;
    c1.img = 4;
    c2.real = 13;
    c2.img = 2;
    res.real= c1.real + c2.real;
    res.img = c1.img + c2.img;
    printf("\nFirst complex number is %d + %di.",c1.real,c1.img);
    printf("\nSecond complex number is %d + %di.",c2.real,c2.img);
    printf("\nSum of the both complex number is %d + %di.",res.real,res.img);
 



    return 0;
}
