#include <stdio.h>

int main() {
    int r, c;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int A[r][c], T[c][r];

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Transpose logic
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            T[j][i] = A[i][j];
        }
    }

    printf("Transpose of matrix:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d ", T[i][j]);
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
    int **A, **T;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    // Allocate memory for original matrix
    A = (int **)malloc(r * sizeof(int *));
    for (int i = 0; i < r; i++) {
        A[i] = (int *)malloc(c * sizeof(int));
    }

    // Allocate memory for transpose matrix
    T = (int **)malloc(c * sizeof(int *));
    for (int i = 0; i < c; i++) {
        T[i] = (int *)malloc(r * sizeof(int));
    }

    // Input matrix elements
    printf("Enter elements of matrix:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", (*(A + i) + j));

    // Transpose logic
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            *(*(T + j) + i) = *(*(A + i) + j);

    // Display transpose
    printf("Transpose of matrix:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++)
            printf("%d ", *(*(T + i) + j));
        printf("\n");
    }

    // Free allocated memory
    for (int i = 0; i < r; i++)
        free(A[i]);
    free(A);

    for (int i = 0; i < c; i++)
        free(T[i]);
    free(T);

    return 0;
}
