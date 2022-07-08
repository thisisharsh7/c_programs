// Write a program to calculate sum of series 1/4 + 4/9 + 9/16 +……….+ (n-1)^2 / n^2.

#include<stdio.h>
#include<math.h>

double seSum(int n){
    double sum=0.0;
    for(int i=1;i<=n;i++){
        sum+=(pow(i-1,2)/pow(i,2));
    }
    return sum;
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    double result = seSum(n);
    printf("\nThe required sum is %.5f.",result);

    return 0;
}