#include <stdio.h>
int main(){

	int i,n,term = 12,sum =0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		
		sum += term;
		term +=10;
		
	}
	printf("%d\n",sum);
	return 0;
}