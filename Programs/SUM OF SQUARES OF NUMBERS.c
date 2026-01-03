// SUM OF SQUARES OF NUMBERS


// Approch-1 (Also Convert into Function)
#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i * i;
    }

    printf("Sum of squares = %d\n", sum);
    return 0;
}

// Approch-2
#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i] * arr[i];
    }

    printf("Sum of squares = %d\n", sum);
    return 0;
}

