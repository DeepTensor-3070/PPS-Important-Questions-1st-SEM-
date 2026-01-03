// Vinod is a part of the Great Indian Survey NGO, which collects people's year of birth for a detailed analysis of that particular year's population.



// After a month-long travel, they have collected data from thousands of people in the eastern states of India.



// Now, Vinod needs to extract the last two digits of the people's birth year for documentation purposes.



// Since the samples are in huge numbers, it is difficult for Vinod to single-handedly do that.



// Can you help Vinod in completing the extraction process efficiently?



// Constraints:

// 1901 ≤ year < 2021



// Input Format:

// The only line of input contains a single integer representing the year of birth of an individual.



// Output Format:

// Print the last two digits of the year as output.

#include <stdio.h>
void main(){
	int year;
	scanf("%d",&year);
	int a = year%100;
	printf("%02d",a);
}