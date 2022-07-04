//  Write a program to calculate sum of first 25 prime numbers.
#include<stdio.h>

int main(){
    int sum=0;
    int cnt=25;
    int arr[1000];
    for(int i=2;i<1000;i++){
        if(arr[i]!=-1 && cnt>0){
            sum+=i;
            // printf("%d ",i);
            cnt--;
        }
        for(int j=2*i;j<1000;j+=i){
            arr[j]=-1;
        }
    }
    printf("\nRequired result is %d.",sum);


    return 0;
}