#include <stdio.h>

int main() {
    int a[10][10], b[10][10], c[10][10];
    int m, n,p,q, i, j;

    printf("Size of mat1: ");
    scanf("%d %d", &m, &n);

    printf("mat1: ");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
	printf("Size of mat2: ");
    scanf("%d %d", &p, &q);

    printf("mat2: ");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &b[i][j]);
        }
    }

	printf("mat1\n");
	for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
		printf("\n");
    }
	printf("mat2\n");
	for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("%d ", b[i][j]);
        }
		printf("\n");
    }
    // Addition of matrices
	if(m==p && n==q){
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Addition\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
	}
	else printf("Addition is not possible\n");

    return 0;
}

