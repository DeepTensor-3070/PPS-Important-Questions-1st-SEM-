#include <stdio.h>

int main() {
    int n;
    char login[50], signoff[50];

    printf("no of employees: ");
    scanf("%d", &n);

    char logins[n][50];
    char signoffs[n][50];

    for (int i = 0; i < n; i++) {
        printf("login: ");
        scanf("%s", logins[i]);

        printf("signoff: ");
        scanf("%s", signoffs[i]);
    }

    printf("Employees timings:\n");

    for (int i = 0; i < n; i++) {
        printf("(%d)login: %s\n", i + 1, logins[i]);
        printf("signoff: %s\n", signoffs[i]);
    }

    return 0;
}

