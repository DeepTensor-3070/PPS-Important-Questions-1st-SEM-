#include <stdio.h>
void main() {
	int marks[5], i, highest, lowest;
	printf("Enter 5 subjects marks : ");
	// Fill the missing code
	for(i=0;i<5;i++){
		scanf("%d",&marks[i]);
	}
	highest = marks[0];
	lowest = marks[0];
	for(i=0;i<5;i++){
		if(marks[i]>highest) highest = marks[i];
		if(marks[i]<lowest) lowest = marks[i];
	}
	printf("Highest marks : %d\nLowest marks : %d\n",highest,lowest);
}