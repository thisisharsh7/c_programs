// Write a C Program to find transpose of a matrix
#include<stdio.h>

int main(){
    int r, c;
    printf("Enter rows and columns of matrix: ");
    scanf("%d%d",&r,&c);
    int m[r][c];
    printf("Enter elements of matrix.\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&m[i][j]);
        }
    }
    printf("\nTranspose of input matrix is.\n");
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",m[j][i]);
        }
        printf("\n");
    }

    return 0;
}