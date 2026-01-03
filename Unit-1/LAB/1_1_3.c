// Fill the missing code of given program to calculate the simple interest and compound interest by reading principal amount, rate of interest and time.



// Note: Use the printf() function and ensure that the character '\n' is printed at the end of the result.



// The formula to find simple interest is simpleInterest = (principal * rate * time) / 100.



// The formula to find compound interest is compoundInterest = principal * pow(1 + (rate / 100), time) - principal.



// Note: Use float data type for all the involved variables.



// Instruction: Strictly follow the input and output layout mentioned in the visible test cases.

#include <stdio.h>
#include <math.h>
void main() {
	float principle, rate, time, simpleInterest, compoundInterest, interest;
	printf("Enter P,R,T: ");
	scanf("%f",&principle);
	scanf("%f",&rate);
	scanf("%f",&time);
	simpleInterest = (principle*rate*time)/100;
	
	compoundInterest = principle*pow(1+(rate/100),time)-principle;
	printf("SI= %f\n",simpleInterest );
	printf("CI= %f\n",compoundInterest );
}