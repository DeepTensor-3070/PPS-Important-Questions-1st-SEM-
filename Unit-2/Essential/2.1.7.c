// Binita recently traveled from Chennai to Delhi on the Rajdhani Express. Unfortunately, the train arrived at the destination later than expected, resulting in a delay. Binita wants to find out the exact duration of the delay in terms of hours and minutes.

// She only knows the total delay time in minutes 
// , and she needs to convert this value into an equivalent format showing both hours and minutes.



// Your task is to help Binita calculate the delay in the format:

// {Hours} Hours and {Minutes} Minutes


// Constraints



// Input Format:

// The input consists of a single integer, 
// , representing the total delay of the train in minutes.

// Output Format:

// Print the delay in the format: "<Hours> Hours and <Minutes> Minutes".

#include <stdio.h>
void main(){
	int totalmin , hrs,min;
	scanf("%d",&totalmin);

	hrs = totalmin/60;
	min = totalmin % 60;
	printf("%d Hours and %d Minutes",hrs,min);
}