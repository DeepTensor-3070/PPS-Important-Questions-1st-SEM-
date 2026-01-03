// Jannu and Preethi both went to Egypt to visit the Pyramids. On seeing the Pyramids they were in discussion. During their discussion, Jannu challenged Preethi by providing the height and base of the pyramid, tasking her with finding its area. Preethi is unfamiliar with the method to calculate the pyramid's area based on its height and base dimensions.



// Can you help Preethi in calculating the area of this Pyramid?



// Functional Description:

// Area = ( height * base )/2 



// Constraints:

// 1 <= height <= 1000

// 1 <= base <= 1000



// Input Format:

// The only line of input has two floating point values representing base and height respectively separated by a space.



// Output Format:

// In the only line of output print the area of the pyramid with only three values after the decimal point.

#include <stdio.h>
void main(){
	float base,height;
	scanf("%f %f",&base,&height);
	float area = (height * base)/2;
	printf("%.3f",area);
}