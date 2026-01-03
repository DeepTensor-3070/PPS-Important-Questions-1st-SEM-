#include <stdio.h>
int main(){

	int n,temp,digit = 0,pow = 1,mask;
	printf("Enter a number : ");
	scanf("%d",&n);
	temp = n;
	while(temp>=10){
		temp /=10;
		pow *=10;
		digit++;
	}
	mask = n%pow;
	printf("Result = %d\n",mask);
	return 0;
}