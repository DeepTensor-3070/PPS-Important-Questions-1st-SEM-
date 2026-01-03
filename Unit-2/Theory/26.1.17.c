#include <stdio.h>
int main(){

	int n,i;
	float result;
	printf("Enter n value : ");
	scanf("%d",&n);
	for(i = 1;i<=n;i++){
		result += 1.0/i;
	}
	printf("Result : %f\n",result);
	return 0;
}