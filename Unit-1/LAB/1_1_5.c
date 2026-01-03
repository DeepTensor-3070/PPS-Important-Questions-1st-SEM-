// Zaheer and Vinod went to California to attend the Apple products launch event. At the event, various mini-contests were held with exciting rewards. In one stall, there was a contest where visitors were given a floating-point number 
//  and asked to display the rightmost digit of the integral part of the number using a programming logic.



// Can you help Zaheer and Vinod to display the rightmost integral part of the number so that they can win exciting Apple products as a reward?



// Input Format:

// The only line of input contains a single floating-point value with exactly three digits after the decimal point.


// Output Format:

// Print the output in a single line, representing the rightmost integral part of the number.

#include <stdio.h>
int main(){
	float a;
	scanf("%f",&a);
	int value = (int)a;
	int ans = value % 10;
	printf("%d",ans);
	return 0;
}