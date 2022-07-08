// Write a function that can produce sum of first n natural numbers.

#include<stdio.h>
int reqSum(int n){
    return n*((n+1)/2);
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int sum = reqSum(n);
    printf("The required sum of first %d natural number is %d.",n,sum);

    return 0;
}