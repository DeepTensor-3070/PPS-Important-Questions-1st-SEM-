#include <stdio.h>

int main() {
    int n, sum = 0;

    scanf("%d", &n);   // Read size of array

    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);   // Read array elements
        sum += a[i];          // Add to sum
    }

    printf("%d", sum);

    return 0;
}

