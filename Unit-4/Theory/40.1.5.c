#include <stdio.h>

int main(){
	char a[10];
	int n;
	printf("Enter size of the array : ");
	scanf("%d",&n);
	printf("Enter array elements : ");
	for(int i = 0;i<n;i++){
		scanf(" %c",&a[i]);
	}
	printf("The given character array elements : ");
	for(int i = 0;i<n;i++){
		printf("%c ",a[i]);
	}
}