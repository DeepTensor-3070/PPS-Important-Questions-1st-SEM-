#include <stdio.h>

void read1(int *arr[], int m, int n) {
    int i, j;
    printf("Enter %d elements : ", m * n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}

void display(int *arr[], int m, int n) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void sumOfEachRow(int *arr[], int m, int n) {
    int i, j, sum;
    for (i = 0; i < m; i++) {
        sum = 0;
        for (j = 0; j < n; j++) {
            sum += arr[i][j];
        }
        printf("Sum of row - %d elements = %d\n", i, sum);
    }
}

