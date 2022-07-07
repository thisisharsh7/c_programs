// write C Program to for insertion Sort

#include<stdio.h>
void inSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int key =arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int main(){
    int n;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements.\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    inSort(arr,n);
    printf("Sorted array is.\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }



    return 0;
}