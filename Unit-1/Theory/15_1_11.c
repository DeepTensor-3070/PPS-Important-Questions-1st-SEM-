// Roopa and Atifa are sisters who love to compete by playing math games, which gradually helped them in their academics one day.



// Roopa gave her sister a math puzzle. The puzzle involves two decimal numbers. Atifa just had to add the two floating-point numbers, but the twist is, that Atifa should only add the integer part of the decimal number. However, Atifa thought she could code a program for the puzzle but found it difficult.



// Can you help her with the suitable logic?



// Explanation:

// Roopa gave her sister two floating-point numbers: 23.44 and 33.22.

// Her sister needs to identify the left-side integral part of the given numbers, which are 23 and 33.

// Finally, the added output value is 56.



// Constraints:

// 0.00 ≤ num1 ≤ 105

// 0.00 ≤ num2 ≤ 105



// Input Format:

// First Line: Has Single Input of type float representing the first number

// Second Line: Has Single Input of type float representing the second number



// Output Format:

// Print the Sum of Integer parts of two numbers

#include <stdio.h>
void main(){
	float num1 , num2;
	scanf("%f",&num1);
	scanf("%f",&num2);
	int sum = (int)num1+(int)num2;
	printf("%d",sum);
	
}
