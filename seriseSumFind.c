//  Write a program to calculate sum of series 1+1/4 + 1/9 +……….+1/n^2.

#include<stdio.h>
#include<math.h>

double seSum(int n){
    double sum=0.0;
    for(int i=1;i<=n;i++){
        sum+=(1/pow(i,2));
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