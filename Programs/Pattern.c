// Pascal Triangle
#include <stdio.h>
int main()
{
	int n, num = 1;
	printf("Enter number of rows : ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			printf(" ");
		}
		num = 1;
		for (int j = 0; j <= i; j++)
		{
			printf(" %d", num);
			num = num * (i - j) / (j + 1);
		}
		printf(" \n");
	}
	return 0;
}

// PYRAMID

#include <stdio.h>

int main()
{
	int n;

	printf("Enter number of rows: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{

		for (int space = 1; space <= n - i; space++)
		{
			printf(" ");
		}

		for (int star = 1; star <= (2 * i - 1); star++)
		{
			printf("*");
		}

		printf("\n");
	}

	return 0;
}
