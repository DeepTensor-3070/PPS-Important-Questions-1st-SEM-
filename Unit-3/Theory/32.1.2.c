#include <stdio.h>

void decimalToBinary(int dec){
	int ans = 0;
	int pow = 1;
	while(dec>0){
		int rem = dec%2;
		dec = dec/2;
		ans += (rem*pow);
		pow *= 10;
	}
	printf("%d",ans);
}