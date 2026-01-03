int* allocateMemory(int n) {
    int *p = (int *)malloc(n * sizeof(int));
    if (p == NULL) {
        printf("Memory allocation failed\n");
        exit(0);
    }
    return p;
}

void read1(int *p, int n) {
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }
}

int sum(int *p, int n) {
    int total = 0, i;
    for (i = 0; i < n; i++) {
        total += p[i];
    }
    return total;
}

