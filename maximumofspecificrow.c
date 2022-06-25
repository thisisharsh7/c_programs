// Write a C function that computes that maximum of a specific row R in a 2D array of size 6X5.
#include<stdio.h>

int main(){
    int arr[6][5];
    int marr[6];//defining array which will contain the maximum of each row of 2d array.
    printf("Enter array elements.\n");
    for(int i=0;i<6;i++){
        scanf("%d",&arr[i][0]);
        int rmaxi=arr[i][0];
        for(int j=1;j<5;j++){
            scanf("%d",&arr[i][j]);
            if(rmaxi<arr[i][j]){
                rmaxi=arr[i][j];
            }
        }
        marr[i]=rmaxi;
    }
    int row;
    printf("\nEnter the row no. whose maximum is to be find: ");
    scanf("%d",&row);
    printf("\nMaximum of row %d is %d.",row,marr[row-1]);


    return 0;
}