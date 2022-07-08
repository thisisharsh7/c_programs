// Write C Program to for selection Sort.
#include<stdio.h>

void selSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=i){
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
}

int main(){
    int arr[100],n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the array elements.\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    selSort(arr,n);
    printf("Sorted array is : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }


    return 0;
}