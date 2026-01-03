#include <stdio.h>


void read1(int *a, int m, int n)
{
	int i, j;
	printf("Enter %d elements : ",m*n);
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", (a + i * n + j));
		}
	}
}


void display(int *a, int m, int n)
{
	int i, j;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", *(a + i * n + j));
		}
		printf("\n");
	}
}


void additionOfTwoMatrices(int *a, int *b, int m, int n)
{
	int i, j;
	int sum[100][100];

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			sum[i][j] = *(a + i * n + j) + *(b + i * n + j);
		}
	}

	printf("The Addition Matrix is\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", sum[i][j]);
		}
		printf("\n");
	}
}

