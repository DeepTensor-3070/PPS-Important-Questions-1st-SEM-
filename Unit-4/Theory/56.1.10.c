
void read1(int *a[], int m, int n)
{
	int i, j;
	
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", (*(a + i) + j));
		}
	}
}


void display(int *a[], int m, int n)
{
	int i, j;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", *(*(a + i) + j));
		}
		printf("\n");
	}
}


void transpose(int *a[], int *b[], int m, int n)
{
	int i, j;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			*(*(b + j) + i) = *(*(a + i) + j);
		}
	}
}

