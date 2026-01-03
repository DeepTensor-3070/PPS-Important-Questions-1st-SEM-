// Write a C program to swap two numbers without using a third variable.



// Input Format:

// The first line contains an integer representing the first number
// The second line contains an integer representing the second number


// Output Format:

// The first line of output displays: "After swapping, first number is: <value>".
// The second line of output displays: "After swapping, second number is: <value>".


// Note: You need to take the inputs for the two numbers and then implement the logic to swap the two numbers without using a third variable. Printing the result has already been provided.

#include <stdio.h>

int main() {
    int num1, num2;
	scanf("%d",&num1);
	scanf("%d",&num2);
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
    printf("After swapping, first number is: %d\n", num1);
    printf("After swapping, second number is: %d", num2);
	return 0;
}

