#include <stdio.h>


int sumOfDigits(int num) {
	int sum = 0;
	while (num > 0) {
		sum += num % 10;
		num /= 10;
	}
	return sum;
}


int reverseNumber(int num) {
	int rev = 0;
	while (num > 0) {
		rev = rev * 10 + (num % 10);
		num /= 10;
	}
	return rev;
}

int main() {
	int num, sum, rev, product;


	printf("Enter a number : ");
	scanf("%d", &num);


	sum = sumOfDigits(num);


	rev = reverseNumber(sum);


	product = sum * rev;


	if (product == num)
		printf("%d is a magic number\n", num);
	else
		printf("%d is not a magic number\n", num);

	return 0;
}

