#include <stdio.h>
int main(){
	int binNum,pow = 1,ans = 0;
	printf("Enter any binary number : ");
	scanf("%d",&binNum);
	while(binNum>0){
		int rem = binNum%10;
		ans += rem*pow;
		binNum /= 10;
		pow *= 2;
	}
	printf("Decimal value : %d\n",ans);
	return 0;
}