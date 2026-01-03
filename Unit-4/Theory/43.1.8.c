#include<stdio.h>
void main() {
	int i, j, m, n, r1, r2, temp;
	int a[5][5];
	printf("Enter the row & column sizes of matrix : ");
	scanf("%d %d", &m, &n);
	printf("Enter %d elements : ", m*n);
	for (i=0;i<m;i++) { //Write the code in for
		for (j=0;j<n;j++) { //Write the code in for
			scanf("%d", &a[i][j]);
		}
	}
	printf("The given matrix is\n");
	// Write the code to display the given matrix
	for (i=0;i<m;i++) { //Write the code in for
		for (j=0;j<n;j++) { //Write the code in for
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	
	printf("Enter row numbers to be interchange : ");
	scanf("%d %d", &r1, &r2);
	if (r1>=0 && r1<m && r2>=0 && r2<m) { // Write the condition part
		for (j=0;j<n;j++) { //Write the code in for
			temp = a[r1][j]; // Complete the statement
			a[r1][j] = a[r2][j]; // Complete the statement
			a[r2][j] = temp; // Complete the statement
		}
		printf("After interchange the matrix is\n");
		// Write the code to display the matrix after interchange
		for (i=0;i<m;i++) { //Write the code in for
			for (j=0;j<n;j++) { //Write the code in for
				printf("%d ", a[i][j]);
		}
		printf("\n");
	}
		
	} else {
		printf("Interchange of rows are not possible\n");
	}
}