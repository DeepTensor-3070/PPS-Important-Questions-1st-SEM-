#include <stdio.h>
int main(){
	int n;
	printf("No.of values: ");
	scanf("%d",&n);
	int a[n];
	printf("Elements: ");
	for(int i = 0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int sum = 0;
	for(int i = 0;i<n;i++){
		sum += a[i];
	}
	printf("Sum= %d",sum);
}