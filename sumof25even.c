// Write a program to calculate sum of first 25 even numbers
#include<stdio.h>

int main(){
    int sum=0;
    for(int i=2;i<=50;i+=2){
        sum+=i;
    }
    printf("Sum is %d.",sum);


    return 0;
}