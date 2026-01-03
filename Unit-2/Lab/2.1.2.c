#include <stdio.h>
void main(){
	int n,i;
	scanf("%d",&n);
	int c =0;
	for(i=1;i*i<=n;i++){
		if(n%i==0){
			c++;
			if((n/i)!=i){
				c++;
			}
		}
	}
	if(c==2) printf("Prime\n");
	else printf("Not Prime\n");
}