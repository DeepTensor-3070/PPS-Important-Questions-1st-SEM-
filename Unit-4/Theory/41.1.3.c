#include <stdio.h>
void main() {
	int arr[10], i, n, value, count = 0;
	printf("Enter size of the array : ");
	scanf("%d", &n );
	printf("Enter array elements : ");
	// Fill the missing code
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter an integer value : ");
	scanf("%d", &value);
	// Fill the missing code
	for(i=0;i<n;i++){
		if(arr[i]==value){
			count++;
		}
	}
	
	
	
	printf("Number of times element %d is repeated : %d\n", value,count );
}