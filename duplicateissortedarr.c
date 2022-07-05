#include<stdio.h>

int main(){i
    int arr[] = {1,1,2,2,4,5,5,6};
    int n = 8;
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            for(int j=i+1;j<n-1;j++){
                arr[j]=arr[j+1];
            }
            n--;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }


    return 0;
}