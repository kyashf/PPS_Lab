#include <stdio.h>

void addMatrices(int n, int mat1[n][n], int mat2[n][n], int result[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void multiplyMatrices(int n, int mat1[n][n], int mat2[n][n], int result[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the order of the matrices: ");
    scanf("%d", &n);

    int mat1[n][n], mat2[n][n], sum[n][n], product[n][n];

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    addMatrices(n, mat1, mat2, sum);
    multiplyMatrices(n, mat1, mat2, product);

    printf("Sum of matrices:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    printf("Product of matrices:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
