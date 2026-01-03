#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    int* arr = (int*)malloc(n*sizeof(int));

    // Check if memory allocation was successful
    if(arr == NULL){
		return 1;
	}
    // Input elements into the array
   for(int i = 0;i<n;i++){
	   scanf("%d",&arr[i]);
   }
    // Find the largest element in the array
	int max = arr[0];
	for(int i = 0;i<n;i++){
		if(arr[i]>max) max=arr[i];
	}
	printf("%d\n",max);
    

    
    // Free dynamically allocated memory
    free(arr);
    return 0;
}