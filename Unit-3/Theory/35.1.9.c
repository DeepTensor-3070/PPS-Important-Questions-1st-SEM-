// Tower Of Hanoi
#include <stdio.h>
void hanoi(int, char, char, char);
void main() {
	int n;
	printf("Enter number of disks : ");
	scanf("%d", &n);
	hanoi(n,'A','B','C');
}
void hanoi(int n, char a, char b, char c) {
	if (n == 1) {
		printf("Move disk - %d from pole %c to %c\n", n, a, c);
	} else {
		hanoi(n-1,a,c,b);
		printf("Move disk - %d from pole %c to %c\n", n, a, c);
		hanoi(n-1,b,a,c);
	}
}