#include <stdio.h>

int main() {
    int a, b;
    int *p, *q;
    int sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    p = &a;   // pointer to a
    q = &b;   // pointer to b

    sum = *p + *q;   // dereferencing pointers

    printf("Sum = %d\n", sum);

    return 0;
}
