#include <stdio.h>
void main() {
	int n, digit, product = 1, temp;
	printf("Enter an integer : ");
	scanf("%d", &n);
temp = n;
	while(n != 0){
		digit = n % 10;
		n = n/10;
		product *= digit;
	}
	printf("The product of each digit in the given number %d = %d\n", temp,product );
}	