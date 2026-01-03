#include <stdio.h>

float calculateSeriesSum(int n) {
	if(n==1) return 1.0;
	// write your code here to find the sum of series recursivley...
	return (1.0/n)+calculateSeriesSum(n-1);
}

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid");
    } else {
        float sum = calculateSeriesSum(n);
        printf("%.2f",sum);
    }

    return 0;
}