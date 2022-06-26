// Write a C Program for multiplication of two matrices.
#include<stdio.h>

int main(){
    printf("Disclaimer:\nMatrices Multiplication is only possible when column of first matrix is equal to the row of second matrix.\n");
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
    if(c1!=r2){
        printf("Wrong input.\nRead Disclaimer Again.");
        return 0;
    }
    printf("\nMultiplication of both the matrices.\n");
    //since in case of multiplication of matrices we know that resultan matrix will have rows equal to first matrix and columns equal to second matrix that why we use r1 and c2 here for printing the resultant matrix. 
    for(int i=0;i<r1;i++){
        int k=0;
        while(k<c2){
            int multiply=0;
            for(int j=0;j<c1;j++){
                multiply+=m1[i][j]*m2[j][k];
            }
            printf("%d ",multiply);
            k++;
        }
        printf("\n");
    }




    return 0;
}