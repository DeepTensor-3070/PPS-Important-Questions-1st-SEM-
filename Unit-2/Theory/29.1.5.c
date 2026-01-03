#include <stdio.h>


double geometric_sum(int n){
	if(n==1) return 1.0;

	return (1.0/n) + geometric_sum(n-1);
}

int main(){
	int n;
	scanf("%d",&n);
	double result= geometric_sum(n);
	printf("%.6lf",result);
	return 0;
}
