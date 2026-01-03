#include <stdio.h>
int main(){
	int a,b,i,j,isPrime;
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++){
		if(i<2) continue;
		isPrime = 1;
		for(j=2;j*j<=i;j++){
			if(i%j == 0){
				isPrime = 0;
				break;
			}
		}
		if(isPrime==1) printf("%d ",i);
	}
	printf("\n");
	return 0;
}
