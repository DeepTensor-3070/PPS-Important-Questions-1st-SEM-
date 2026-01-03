// Approch 1
#include <stdio.h>

int main() {
    int n;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("Factorial = %lld\n", fact);
    return 0;
}

// Approch-2 (Recursion)
#include <stdio.h>

long long factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial = %lld\n", factorial(n));
    return 0;
}

// Approch-3 (Functions)
#include <stdio.h>

long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial = %lld\n", factorial(n));
    return 0;
}

// Approch-4 (array)

#include <stdio.h>

int main() {
    int n;
    long long fact[100];
    fact[0] = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        fact[i] = fact[i - 1] * i;
    }

    printf("Factorial = %lld\n", fact[n]);
    return 0;
}
