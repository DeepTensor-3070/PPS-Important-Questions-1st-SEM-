// Write a C program that accepts two integers from the user. If the first number is greater than the second number, the program should print their sum. Otherwise, it should print their difference. Use the ternary operator for conditional checking.



// Input Format:

// The input should accept two space-separated integers.


// Output Format:

// If the first integer is greater than the second integer, print the sum of the two integers. Otherwise, print the difference between the two integers.


// Note: Refer to the visible test cases for better understanding.

#include <stdio.h>
int main(){
	int a1 , a2 ;
	scanf("%d %d",&a1,&a2);
	// scanf("%d",&a2);
	if(a1>a2){
		printf("%d",a1+a2);
	}
	else{
		printf("%d",a1-a2);
	}
	return 0;
}