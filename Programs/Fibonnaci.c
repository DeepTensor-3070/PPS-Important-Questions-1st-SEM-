// Function approch
#include <stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1, c;

    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}

int main() {
    int n;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}

// Recursive
#include <stdio.h>

int fib(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        printf("%d ", fib(i));

    return 0;
}
