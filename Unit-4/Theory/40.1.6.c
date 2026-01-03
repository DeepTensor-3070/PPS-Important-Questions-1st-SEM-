#include <stdio.h>
void main() {
	int arr[20], number, sum = 0, min = 0, max = 0;
	scanf("%d", &number);
	printf("Elements: ");
	for (int i = 0; i < number; i++) {
		scanf("%d", &arr[i]);	
	}
	/* Write your logic here to find the maximum, minimum and average in the given integer array*/
	max = min = arr[0];
	for(int i = 0;i<number;i++){
		if(arr[i]>max) max = arr[i];
		if(arr[i]<min) min = arr[i];
		sum += arr[i];
	}
	float avg = (float)sum/number;
	
	
	printf("Min,max,avg: %d %d %0.2f",min,max,avg);
}