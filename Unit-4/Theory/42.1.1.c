#include <stdio.h>
int main(){
	int n,i;
	int largest,slargest;
	printf("Enter how many values you want to read : ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	if(a[0]>a[1]){
		largest = a[0];
		slargest = a[1];
	}
	else{
		largest = a[1];
		slargest = a[0];
	}
	for(i = 2;i<n;i++){
		if(a[i]>largest){
			slargest = largest;
			largest = a[i];
		}
		else if(a[i]>slargest && a[i] != largest){
			slargest = a[i];
		}
	}
	printf("The largest element of the array = %d\n",largest);
	printf("The second largest element of the array = %d\n",slargest);
	return 0;
}