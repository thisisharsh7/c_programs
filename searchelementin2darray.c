//Write a C function that searches for value key in a 2D array of size 6X5. The function should return true if found false otherwise
#include<stdio.h>
#include<stdbool.h>

bool searchfunc(int arr[][5],int row,int col,int key){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==key){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int arr[6][5];//row is 6 and col is 5
    printf("Enter elements of the 2d array of size 6x5.\n");
    for(int i=0;i<6;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nEnter the key to be search: ");
    int key;
    scanf("%d",&key);
    bool search=searchfunc(arr,6,5,key);
    if(search){
        printf("Element is present.\n");
    }else{
        printf("Element is not present.\n");
    }
    



    return 0;
}