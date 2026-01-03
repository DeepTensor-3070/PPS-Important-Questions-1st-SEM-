#include <stdio.h>
int main(){

	int a,b;
	printf("Enter two integer numbers : ");
	scanf("%d %d",&a,&b);
	int x=a,y=b;
	int hcf;
	while(a>0 && b>0){
		if(a>b) a= a%b;
		else b = b%a;
	}
	if(a==0) hcf = b;
	else hcf = a;
	int lcm = (x*y)/hcf;
	printf("LCM of %d and %d : %d\n",x,y,lcm);
	return 0;
}