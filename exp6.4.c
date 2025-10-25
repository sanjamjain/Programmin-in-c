#include <stdio.h>

int main() {
    int m, n;
    int p, q;
    int i, j, k;

    printf("Enter rows and columns for Matrix A (m n): ");
    scanf("%d %d", &m, &n);

    printf("Enter rows and columns for Matrix B (p q): ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("\nError: Matrices are incompatible for multiplication.\n");
        printf("The number of columns in Matrix A (%d) must be equal to the number of rows in Matrix B (%d).\n", n, p);
        return 1;
    }
    
    // Declare Variable-Length Arrays (VLAs) after getting the dimensions
    int matrix_A[m][n];
    int matrix_B[p][q];
    int result_C[m][q];

    printf("\nEnter elements for Matrix A (%d x %d):\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &matrix_A[i][j]);
        }
    }

    printf("\nEnter elements for Matrix B (%d x %d):\n", p, q);
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &matrix_B[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            result_C[i][j] = 0;
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < n; k++) {
                result_C[i][j] += matrix_A[i][k] * matrix_B[k][j];
            }
        }
    }

    printf("\n========================================\n");
    printf("         INPUT AND RESULTANT MATRICES\n");
    printf("========================================\n");

    printf("\n--- Matrix A (%d x %d) ---\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", matrix_A[i][j]);
        }
        printf("\n");
    }

    printf("\n--- Matrix B (%d x %d) ---\n", p, q);
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("%d\t", matrix_B[i][j]);
        }
        printf("\n");
    }

    printf("\n--- Resultant Matrix C (A x B) (%d x %d) ---\n", m, q);
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d\t", result_C[i][j]);
        }
        printf("\n");
    }

    return 0;
}