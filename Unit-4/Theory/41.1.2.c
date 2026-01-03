#include <stdio.h>
void main() {
	int arr[10], i, n, value;
	printf("Enter size of the array : ");
	scanf("%d",&n);
	printf("Enter array elements : ");
	// Fiil the missing code
	for(i = 0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Enter an integer value : ");
	scanf("%d", &value );
	printf("The indexes of the array elements matching the given value are : ");
	// Fill the missing code
	for(i = 0;i<n;i++){
		if(arr[i]==value){
			printf("%d ",i);
		}
	}
	
	
}