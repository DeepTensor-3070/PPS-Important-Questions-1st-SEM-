void read1(int a[], int n) {
    int i;
    printf("Enter %d elements : ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

void display(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}


void bubble_sort(int a[], int n) {
    int i, j, temp;
    
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                // Swap elements
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}



