#include <stdio.h>

void read1(int [5][5], int, int);
void display(int [5][5], int, int);
void largest_of_each_row(int [5][5], int, int);

void main() {
    int arr[5][5], m, n;
    printf("Enter row and column sizes : ");
    scanf("%d %d", &m, &n);
    read1(arr, m, n);
    printf("The given matrix is\n");
    display(arr, m, n);
    largest_of_each_row(arr, m, n);
}

void read1(int x[5][5], int m, int n) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter the value of arr[%d][%d] : ", i, j);
            scanf("%d", &x[i][j]);
        }
    }
}

void display(int y[5][5], int m, int n) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", y[i][j]);
        }
        printf("\n");
    }
}

void largest_of_each_row(int a[5][5], int m, int n) {
    int i, j, largest;
    for (i = 0; i < m; i++) {
        largest = a[i][0];
        for (j = 1; j < n; j++) {
            if (a[i][j] > largest)
                largest = a[i][j];
        }
        printf("Largest of row - %d elements = %d\n", i, largest);
    }
}

