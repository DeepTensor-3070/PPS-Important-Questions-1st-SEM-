#include <stdio.h>

int fibonacci(int n) {
	if(n == 0 || n == 1) return n;
	// calculate the nth Fibonacci number
	return fibonacci(n-1)+fibonacci(n-2);
}

// Function to print Fibonacci series up to the nth term
void printFibonacciSeries(int n) {
    // Loop to call the recursive function and print each term
    for (int i = 0; i < n; i++) {
        //Call the recursive function to get the ith Fibonacci term
        int term = fibonacci(i);
        //Print the term
        printf("%d",term);
        // Add a space if it's not the last term
		if(i != n-1) printf(" ");
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid input");
        return 1;
    }
    printFibonacciSeries(n);
    return 0;
}
