#include <stdio.h>
int sumOfDigits(int);
void main() {
	int n;
	printf("Enter an integer value : ");
	scanf("%d", &n);
	printf("Sum of digits of given number %d = %d\n",n,sumOfDigits(n)); // Complete the statement
}
int sumOfDigits(int n) {
	if (n != 0) { // Fill the condition
		return (n%10)+sumOfDigits(n/10); // Complete the statement
	} else {
		return 0; // Complete the statement
	}
}