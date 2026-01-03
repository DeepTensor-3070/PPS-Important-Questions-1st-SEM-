#include <stdio.h>

int main(){

	int a,b;
	printf("Enter two integer numbers : ");
	scanf("%d %d",&a,&b);
	int a1 = a;
	int b1 = b;
	while(a>0 && b>0){
		if(a>b) a = a%b;
		else b = b%a;
	}
	if(a==0) printf("GCD of %d and %d : %d\n",a1,b1,b);
	else printf("GCD of %d and %d : %d\n",a1,b1,a);
	return 0;
}