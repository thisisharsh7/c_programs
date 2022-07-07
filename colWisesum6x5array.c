// Write a C function that computes that total sum of of a specific col C in a 2D array of size 6X5
#include<stdio.h>
int marr(int arr[][5],int row,int col,int c){
    int sm=0;
    for(int i=0;i<row;i++){
        sm+=arr[i][c-1];
    }
    return sm;
}

int main(){
    int arr[6][5];
    // int marr[6];//defining array which will contain the maximum of each row of 2d array.
    printf("Enter array elements.\n");
    for(int i=0;i<6;i++){
        scanf("%d",&arr[i][0]);
        // int rmaxi=arr[i][0];
        for(int j=1;j<5;j++){
            scanf("%d",&arr[i][j]);
            // if(rmaxi<arr[i][j]){
            //     rmaxi=arr[i][j];
            // }
        }
        // marr[i]=rmaxi;
    }
    int c;
    printf("\nEnter the Column no. whose sum is to be find: ");
    scanf("%d",&c);
    printf("\nSum of Column %d is %d.",c,marr(arr,6,5,c));


    return 0;
}