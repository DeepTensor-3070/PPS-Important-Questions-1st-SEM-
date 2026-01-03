#include <stdio.h>
int main(){
	int n,num=1;
	printf("Enter number of rows : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			printf(" ");
		}
		num=1;
		for(int j=0;j<=i;j++){
			printf(" %d",num);
			num = num * (i-j)/(j+1);
		}
		printf(" \n");
	}
	return 0;
}