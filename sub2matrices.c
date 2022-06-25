// Write a C Program to find subtraction of two matrices.
#include<stdio.h>


int main(){
    printf("Disclaimer:\nMatrices Subtraction is only possible when both matrix have same no. of rows and columns.\n");
    int r1, c1, r2, c2;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d%d",&r1,&c1);
    int m1[r1][c1];
    printf("Enter elements of first matrix.\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&m1[i][j]);
        }
    }
    printf("\nEnter rows and columns of second matrix: ");
    scanf("%d%d",&r2,&c2);
    int m2[r2][c2];
    printf("Enter the elements of second matrix.\n");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&m2[i][j]);
        }
    }
    if(r1!=r2 && c1!=c2){
        printf("Wrong input.\nRead Disclaimer Again.");
        return 0;
    }
    printf("\nDifference of both the matrices.\n");
    //since r1 and r2 are equal we can use any r1 and r2 same case for c1 and c2
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            int diff=m1[i][j]-m2[i][j];
            printf("%d ",diff);
        }
        printf("\n");
    }


    return 0;
}