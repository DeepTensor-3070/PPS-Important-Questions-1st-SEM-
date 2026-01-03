#include <stdio.h>

int main() {
    int a[10][10], b[10][10], c[10][10];
    int m, n,p,q, i, j;

    printf("Enter the row & column sizes of matrix-1 : ");
    scanf("%d %d", &m, &n);

    printf("Enter matrix-1 %d elements : ",m*n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
	printf("Enter the row & column sizes of matrix-2 : ");
    scanf("%d %d", &p, &q);

    printf("Enter matrix-2 %d elements : ",p*q);
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &b[i][j]);
        }
    }

	printf("The given matrix-1 is\n");
	for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
		printf("\n");
    }
	printf("The given matrix-2 is\n");
	for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("%d ", b[i][j]);
        }
		printf("\n");
    }

	if(m==p && n==q){
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            c[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("Subtraction of two matrices is\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
	}
	else printf("Subtraction is not possible\n");

    return 0;
}

