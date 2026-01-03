#include <stdio.h>

int main() {
    int a[10][10], t[10][10];
    int m, n, i, j;

    printf("Enter the order of matrix : ");
    scanf("%d %d", &m, &n);

    printf("Enter %d elements : ", m * n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

	printf("The given matrix is\n");
	for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
		printf("\n");
    }
    // Calculate transpose
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            t[j][i] = a[i][j];
        }
    }

    // Display transpose matrix
    printf("Transpose of the given matrix is\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}

