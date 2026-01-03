// Left Rotaion
#include <stdio.h>

int main() {
    int n, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number of rotations: ");
    scanf("%d", &k);

    // Normalize rotations
    k = k % n;

    for (int r = 1; r <= k; r++) {
        int first = arr[0];

        for (int i = 0; i < n - 1; i++)
            arr[i] = arr[i + 1];

        arr[n - 1] = first;
    }

    printf("Array after left rotation:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
