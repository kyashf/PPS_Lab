#include <stdio.h>

int main() {
    int m, n;
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);

    int mat[m][n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    int sumPrimaryDiagonal = 0, sumSecondaryDiagonal = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                sumPrimaryDiagonal += mat[i][j];
            }
            if (i + j == n - 1) {
                sumSecondaryDiagonal += mat[i][j];
            }
        }
    }

    printf("Sum of primary diagonal elements: %d\n", sumPrimaryDiagonal);
    printf("Sum of secondary diagonal elements: %d\n", sumSecondaryDiagonal);

    return 0;
}
