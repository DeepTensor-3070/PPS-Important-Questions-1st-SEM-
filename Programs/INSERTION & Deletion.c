// Insertion
#include <stdio.h>

int main() {
    int n, pos, element;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];   // one extra space for insertion

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);

    printf("Enter element to insert: ");
    scanf("%d", &element);

    // shift elements to the right
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = element;  // insert element
    n++;

    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

// Deletion
#include <stdio.h>

int main() {
    int n, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to delete (1 to %d): ", n);
    scanf("%d", &pos);

    // shift elements to the left
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;   // reduce size after deletion

    printf("Array after deletion:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
