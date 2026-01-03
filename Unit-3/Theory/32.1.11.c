#include <stdio.h>
void fibonacci(int n){
	int a = 0,b =1,c=0;
	printf("The Fibonacci series is : ");
	if(n>=1) printf("%d",a);
	if(n>=2) printf(" %d",b);
	while(1){
		c = a+b;
		if(c>n){
			break;
		}
		printf(" %d",c);
		a=b;
		b=c;
	}
}