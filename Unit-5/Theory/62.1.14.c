#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Enter n value : ");
    scanf("%d", &n);

    char names[n][50];
    
    printf("Enter %d strings : ", n);
    for (int i = 0; i < n; i++)
        scanf("%s", names[i]);

    printf("Before sorting : ");
    for (int i = 0; i < n; i++)
        printf("%s ", names[i]);
    printf("\n");

    // Bubble sort for strings
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                char temp[50];
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    printf("After sorting : ");
    for (int i = 0; i < n; i++)
        printf("%s ", names[i]);
    printf("\n");

    return 0;
}

