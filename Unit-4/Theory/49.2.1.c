#include <stdio.h>
#include <stdlib.h>
void main() {
	int (*a)[3], n, m, i, j;
	printf("Enter row and column sizes : ");
	scanf("%d %d", &m, &n);
	a = (int (*)[3])malloc(m*sizeof(int[3]));// Allocate memory;
	printf("Enter %d elements : ", m * n);
	// Read the elements of the matrix
	for (i=0;i<m;i++) {
		for (j=0;j<n;j++) {
			scanf("%d",&a[i][j]);
		}
	}
	printf("The given matrix is\n");
	// Display the elements
	for (i=0;i<m;i++) {
		for (j=0;j<n;j++) {
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}