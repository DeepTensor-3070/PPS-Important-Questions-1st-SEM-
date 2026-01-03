#include <stdio.h>
void main(){
	int n , digit = 0;
	scanf("%d",&n);
	if(n<0) n= -n;
	else{
		int temp = n;
		while(temp > 0){
			temp /= 10;
			digit++;
		}
	}
	if(digit == 1) printf("Insufficient Earning");
	else if(digit == 2) printf("Very Low Earning");
	else if(digit == 3) printf("Low Earning");
	else if(digit == 4) printf("Sufficient Earning");
	else printf("High Earning");
	
}