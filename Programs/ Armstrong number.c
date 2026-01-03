#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, count = 0;
    int sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Step 1: Count number of digits
    while (temp != 0) {
        count++;
        temp /= 10;
    }

    temp = num;

    // Step 2: Calculate Armstrong sum
    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    // Step 3: Check condition
    if (sum == num)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");

    return 0;
}
