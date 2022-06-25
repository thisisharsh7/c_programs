//sum of elements of 2d matrix question no. 36
#include<stdio.h>

int main(){
    int row,col;
    printf("Enter the size of row and column of 2d array: ");
    scanf("%d %d",&row,&col);
    int arr[row][col];
    int sum=0;
    printf("Enter array elements.\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The sum of elements of 2d array: ");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
    }
    printf("Sum is %d",sum);



    return 0;
}
