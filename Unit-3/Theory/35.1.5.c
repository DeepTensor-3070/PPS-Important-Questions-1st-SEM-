#include <stdio.h>
int gcd(int, int);
void main() {
	int a, b;
	printf("Enter two integer values : ");
	scanf("%d %d", &a, &b);
	printf("The gcd of two numbers %d and %d = %d\n",a,b,gcd(a,b)); // Complete the statement
}
int gcd(int a, int b) {
	if (a%b == 0) { // Fill the condition
		return b;// Complete the statement
	} else {
		return gcd(b,a%b); // Complete the statement
	}
}