#include <stdio.h>
#include <math.h>
int main(){
	int l,u;
	scanf("%d %d",&l,&u);
	if(l<2) l = 2;
	int i,j,count = 0,isPrime;
	for(i = l;i<=u;i++){
		isPrime = 1;
		for(j=2;j*j<=i;j++){
			if(i%j == 0){
				isPrime = 0;
				break;
			}
		}
		if(isPrime == 1) count++;
	}
	printf("%d",count);
	
	return 0;
}

