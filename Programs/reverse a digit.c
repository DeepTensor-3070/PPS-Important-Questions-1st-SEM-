#include <stdio.h>

int main() {
    int num, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        rev = rev * 10 + (num % 10);
        num /= 10;
    }

    printf("Reversed number = %d\n", rev);
    return 0;
}

// Palindrome number

#include <stdio.h>

int main() {
    int num, temp, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;  

    while (num != 0) {
        rev = rev * 10 + (num % 10);
        num /= 10;
    }

    if (temp == rev)
        printf("Palindrome number\n");
    else
        printf("Not a palindrome number\n");

    return 0;
}
