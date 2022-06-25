// Write a program to compute sum of those array elements that are prime in an array of 10 integers.
#include<stdio.h>

int main(){
    int arr[10];
    int sum=0;
    printf("Enter array elements.\n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++){
        int n=arr[i];
        sum+=n;
        if (n == 0 || n == 1){
            sum-=n;
        }
        for (int j = 2; j <= n / 2; j++) {
            // if n is divisible by i, then n is not prime
            if (n % j == 0) {
                sum-=n;
                break;
            }
        }
    }
    printf("Sum is %d.",sum);

    return 0;
}