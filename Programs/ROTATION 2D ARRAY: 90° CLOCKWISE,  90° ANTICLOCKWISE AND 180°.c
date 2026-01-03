// 90° CLOCKWISE Rotation
// result[j][n-1-i] = matrix[i][j]
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n][n], r[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    // 90° Clockwise
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            r[j][n - 1 - i] = a[i][j];

    printf("90 Degree Clockwise Rotation:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", r[i][j]);
        printf("\n");
    }

    return 0;
}

// 90° ANTI-CLOCKWISE Rotation
// result[n-1-j][i] = matrix[i][j]
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n][n], r[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    // 90° Anti-clockwise
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            r[n - 1 - j][i] = a[i][j];

    printf("90 Degree Anti-Clockwise Rotation:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", r[i][j]);
        printf("\n");
    }

    return 0;
}

// 180° Rotation
// result[n-1-i][n-1-j] = matrix[i][j]
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n][n], r[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    // 180° Rotation
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            r[n - 1 - i][n - 1 - j] = a[i][j];

    printf("180 Degree Rotation:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", r[i][j]);
        printf("\n");
    }

    return 0;
}
