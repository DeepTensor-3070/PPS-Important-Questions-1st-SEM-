// Nathan, working as an HR in a private company, had an opportunity to interview students from various disciplines. During the interview, he asked the candidates to perform the addition of two floating-point numbers, num1, and num2, and print the output with three values after the decimal point. Unfortunately, many students failed a math test on adding two numbers, leading to a significant number of candidates being unable to complete the first round.



// One day, Nathan was invited as the chief placement trainer at a reputed engineering college. He was eager to assess how many students were capable of solving the same problem



// Can you solve the problem and prove to him that you are capable of solving it?



// Constraints:

// 1.00 ≤ num1 ≤ 25000.00
// 1.00 ≤ num2 ≤ 25000.00


// Input Format:

// The input consists of two floating-point values separated by a space.



// Output Format:

// The output is the sum of the two floating-point numbers, and it should display three values after the decimal point.

#include <stdio.h>
void main(){
	float num1,num2;
	scanf("%f %f",&num1 , &num2);
	printf("%.3f",num1+num2);
}