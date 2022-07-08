// Write a program to count number of even numbers in an array

#include<stdio.h>

int main(){
    int n,cnt=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements.\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            cnt++;
        }
    }
    printf("\nThe number of even number in the input array is %d.",cnt);
    

    return 0;
}