#include <stdio.h>
int countDigits(int n){
	int ct = 0;
	while(n!=0){
		int lastDigit = n%10;
		ct++;
		n = n/10;
	}
	return ct;
}
int main() {
    int num;

    scanf("%d", &num);

    int digitCount = countDigits(num);
    printf("Number of digits in %d is: %d\n", num, digitCount);

    return 0;
}
