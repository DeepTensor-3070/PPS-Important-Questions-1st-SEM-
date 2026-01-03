#include <stdio.h>
int main(){

	int n,sum;
	printf("Enter an integer : ");
	scanf("%d",&n);
	while(n>9){
		sum = 0;
		while(n>0){
			sum += n%10;
			n /= 10;
		}
		n = sum;
	}
	printf("Result = %d\n",sum);
	return 0;
}