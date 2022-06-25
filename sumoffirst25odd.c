// Write a program to calculate sum of first 25 odd numbers.
#include<stdio.h>

int main(){
    int sum=0;
    for(int i=1;i<=50;i+=2){
        sum+=i;
    }
    printf("Sum is %d.",sum);


    return 0;
}