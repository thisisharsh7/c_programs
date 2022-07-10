// Write a program using structure to compute sum of two Rational numbers.

#include<stdio.h>

typedef struct ratio{int num,denom;}ratio;
ratio add(ratio n1, ratio n2){ratio res;
    res.num = (n1.num)*(n2.denom)+(n1.denom)*(n2.num);
    res.denom = (n1.denom)*(n2.denom);
    return (res);
}

int main(){
    ratio n1,n2,res;
    n1.num = 2;  n1.denom = 3; n2.num = 4;  n2.denom = 5;
    res = add(n1,n2);
    printf("First rational number is %d/%d.\n",n1.num,n1.denom);
    printf("Second rational number is %d/%d.\n",n2.num,n2.denom);
    printf("Sum of both rational number is %d/%d.\n",res.num,res.denom);

    return 0;
}