
void read1(int *p, int n) {
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }
}

void display(int *p, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", p[i]);
    }
}

