#include <stdio.h>

void addMatrices(int a[2][2], int b[2][2], int sum[2][2]) {
    int i, j;
    
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
}

void printMatrix(int matrix[2][2]) {
    int i, j;
    
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrixA[2][2] = {
        {1, 2},
        {3, 4}
    };

    int matrixB[2][2] = {
        {5, 6},
        {7, 8}
    };

    int sum[2][2];

    printf("Matrix A:\n");
    printMatrix(matrixA);

    printf("\nMatrix B:\n");
    printMatrix(matrixB);

    addMatrices(matrixA, matrixB, sum);

    printf("\nSum of A + B:\n");
    printMatrix(sum);

    return 0;
}