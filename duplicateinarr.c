#include<stdio.h>

int main(){
    int arr[20],i,j,k,n;
    printf("Enter the number of elements in an array: ");
    scanf("%d",&n);
    printf("Enter %d elements.\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                for(k=j;k<n;k++){
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }


    return 0;
}