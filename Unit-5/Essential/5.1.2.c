#include <stdio.h>
#define MAX_SIZE 100
// prototype functions
void inputArray(int * arr, int size);
int search(int * arr, int size, int toSearch);

int main() {
	int arr[MAX_SIZE];
	int size,toSearch,index;
	scanf("%d",&size);
	inputArray(arr,size);
	scanf("%d",&toSearch);
	printf("%d",search(arr,size,toSearch));
	return 0;
	// Write your code here

}
void inputArray(int * arr, int size) {
	for(int i = 0;i<size;i++){
		scanf("%d",&(arr[i]));
	}
	// Write your code here
	
}
int search(int * arr, int size, int toSearch) {
	for(int i = 0;i<size;i++){
		if(*(arr+i)==toSearch) return 1;
	}
	return -1;
	// Write your code here
	
}