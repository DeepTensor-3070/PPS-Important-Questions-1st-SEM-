// Arav and Aaron are participating in the Bike racing. Arav crossed some milestones earlier and Aaron crossed some milestones earlier during their racing because they have changed their speeds at different times.



// Both of them like to know the difference in speeds between them at different stages of racing.



// Can you help find the absolute difference between the speeds of Arav and Aaron?



// Input Format: 

// The first line of input represents the speed of Arav. 
// The second line of input represents speed of Aaron. 


// Output Format: 

// Print the absolute difference between the driving speeds of the two participants in a single line.

#include <stdio.h>
#include <stdlib.h>
void main(){
	int arav,aron,res;
	scanf("%d",&arav);
	scanf("%d",&aron);
	res = abs(arav-aron);
	printf("%d",res);
}