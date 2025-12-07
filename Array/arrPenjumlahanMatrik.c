#include <stdio.h>

int main() {
    int A[2][2] = {{1, 2}, {5, 6}};
    int B[2][2] = {{3, 4}, {7, 8}};
    int C[2][2];
    
    
    printf("Matrix A:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    
    printf("\nMatrix B:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    
    //Penjumlahan matrik
    printf("\nMatrix C (A + B):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            C[i][j] = A[i][j] + B[i][j];
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}