// Surya used to wear a smartwatch when he was on the treadmill and during cycling. Surya's smartwatch displays the total workout time in seconds.



// But Surya would like to know the time he spent on the workout in H:M:S format.



// Can you help Surya in knowing the time he spent on the workout in the prescribed format?



// Constraints:

// 1 <= seconds <= 10000



// Input Format:

// The input consists of an integer representing the workout time in seconds



// Output Format:

// The output displays Surya's workout time in the prescribed format



// Refer sample test cases for your input and output format specification.

#include <stdio.h>
void main(){
	int workout_time;
	scanf("%d",&workout_time);
	int h = workout_time / 3600;
	int m = (workout_time%3600)/60;
	int s = workout_time % 60;
	printf("%dH:%dM:%dS",h,m,s);
}