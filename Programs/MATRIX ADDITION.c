#include <stdio.h>

int main() {
    int r, c;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int A[r][c], B[r][c], C[r][c];

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Matrix addition
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            C[i][j] = A[i][j] + B[i][j]; // Also subtraction can be done
        }
    }

    printf("Resultant matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
// Pointers+DMA
#include <stdio.h>
#include <stdlib.h>

int main() {
    int r, c;
    int **A, **B, **C;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    // Allocate memory for matrices
    A = (int **)malloc(r * sizeof(int *));
    B = (int **)malloc(r * sizeof(int *));
    C = (int **)malloc(r * sizeof(int *));

    for (int i = 0; i < r; i++) {
        A[i] = (int *)malloc(c * sizeof(int));
        B[i] = (int *)malloc(c * sizeof(int));
        C[i] = (int *)malloc(c * sizeof(int));
    }

    // Input first matrix
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", (*(A + i) + j));

    // Input second matrix
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", (*(B + i) + j));

    // Matrix addition
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            *(*(C + i) + j) = *(*(A + i) + j) + *(*(B + i) + j);

    // Display result
    printf("Resultant Matrix (Addition):\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%d ", *(*(C + i) + j));
        printf("\n");
    }

    // Free memory
    for (int i = 0; i < r; i++) {
        free(A[i]);
        free(B[i]);
        free(C[i]);
    }
    free(A);
    free(B);
    free(C);

    return 0;
}
