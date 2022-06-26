// Write C Program to for bubble Sort
#include<stdio.h>

int main(){
    int n=5;
    int arr[5]={43,2,1,9,3};
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }


    return 0;
}