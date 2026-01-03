#include <stdio.h>
void swap(int ,int); // Complete the function declaration
void main() {
	int firstNum, secondNum;
	printf("Enter two integer values : ");
	scanf("%d %d", &firstNum, &secondNum);
	printf("Before swapping : firstNum = %d secondNum = %d\n", firstNum, secondNum);
	swap(firstNum,secondNum); // Write the arguments in the function call
	printf("After swapping : firstNum = %d secondNum = %d\n", firstNum, secondNum);
}
void swap(int firstValue,int secondValue) { // Write the parameters in the function definition
	int temp;
	temp = firstValue; // Complete the statement
	firstValue = secondValue; // Complete the statement
	secondValue = temp; // Complete the statement
	printf("In swap() : firstValue = %d secondValue = %d\n", firstValue, secondValue);
}