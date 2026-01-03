#include <stdio.h>

float Average(int arr[],int n){
	float sum = 0;
	for(int i = 0;i<n;i++){
		sum = sum + arr[i];
	}
	return (sum/n);
}


int main() {
	int n;
	
	scanf("%d", &n);
	
	int subjects[n];
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &subjects[i]);
	}
	
	printf("Average: %.2f\n",Average(subjects, n));
	
	return 0;
}