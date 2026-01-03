#include <stdio.h>

int main() {
    int a[100], b[100];
    int n, i, j, k = 0;
    int isDuplicate;

    printf("Enter array size : ");
    scanf("%d", &n);

    printf("Enter %d array elements : ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Remove duplicates
    for (i = 0; i < n; i++) {
        isDuplicate = 0;

        // check if a[i] is already in b[]
        for (j = 0; j < k; j++) {
            if (a[i] == b[j]) {
                isDuplicate = 1;
                break;
            }
        }

        // if not duplicate, add to b[]
        if (!isDuplicate) {
            b[k] = a[i];
            k++;
        }
    }

    printf("After eliminating duplicates, the array is : ");
    for (i = 0; i < k; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    return 0;
}

