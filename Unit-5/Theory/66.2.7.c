#include <stdio.h>

struct fraction {
    int num;
    int den;
};

/* Function to find GCD */
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void main() {
    struct fraction f1, f2, sum;
    int lcm, g;

    printf("Fraction1 Numerator Denominator: ");
    scanf("%d %d", &f1.num, &f1.den);

    printf("Fraction2 Numerator Denominator: ");
    scanf("%d %d", &f2.num, &f2.den);

    /* Finding LCM of denominators */
    lcm = (f1.den * f2.den) / gcd(f1.den, f2.den);

    /* Calculating sum */
    sum.num = (f1.num * (lcm / f1.den)) +
              (f2.num * (lcm / f2.den));
    sum.den = lcm;

    /* Reducing the fraction */
    g = gcd(sum.num, sum.den);
    sum.num /= g;
    sum.den /= g;

    /* Display result */
    printf("%d / %d + %d / %d = %d / %d\n",
           f1.num, f1.den, f2.num, f2.den, sum.num, sum.den);
}

