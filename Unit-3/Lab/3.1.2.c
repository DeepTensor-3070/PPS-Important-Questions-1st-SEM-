#include <stdio.h>

// Function to convert decimal to binary
void decToBinary(int n) {
    int ans = 0;
	int pow = 1;
	while(n>0){
		int rem = n%2;
		n = n/2;
		ans += (rem*pow);
		pow *= 10;
	}
	printf("%d\n",ans);
}

int main() {
    int n;
    scanf("%d", &n);
    if (n < 0) {
        printf("Negative numbers are not supported\n");
        return 1;
    }
    decToBinary(n);
    printf("\n");
    return 0;
}
