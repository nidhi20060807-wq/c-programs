#include<stdio.h>

int main(){

    int row, column;

    printf("Enter number of rows: ");
    scanf("%d",&row);

    printf("Enter number of columns: ");
    scanf("%d",&column);

    int matrix1[row][column];
    int matrix2[row][column];
    int result[row][column];

    // Input matrices
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){

            printf("Enter element [%d][%d] of matrix1: ",i,j);
            scanf("%d",&matrix1[i][j]);

            printf("Enter element [%d][%d] of matrix2: ",i,j);
            scanf("%d",&matrix2[i][j]);

            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("\nResult matrix:\n");

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
