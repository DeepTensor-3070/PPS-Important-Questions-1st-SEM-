#include <stdio.h>
#include <stdlib.h>
void main() {
	int *p, m, n, i, j;
	printf("Enter row and column size : ");
	scanf("%d %d",&m,&n); // Read the values of row and column
	p = (int *)malloc(m*n*sizeof(int));// Allocate heap memory;
	printf("Enter %d matrix elements : ", m * n);
	// Read the elements of the matrix
	for (i=0;i<m;i++) {
		for (j=0;j<n;j++) {
			scanf("%d",(p+i*n+j));
		}
	}
	printf("The given matrix is\n");
// Print the result
	for (i=0;i<m;i++) {
		for (j=0;j<n;j++) {
			printf("%d ",*(p+i*n+j));
		}
		printf("\n");
	}
	free(p);
}