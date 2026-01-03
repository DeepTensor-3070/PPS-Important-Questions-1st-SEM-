#include <stdio.h>
int main(){

	int n,num;
	printf("Enter rows: ");
	scanf("%d",&n);
	if(n<=0){
		printf("Number of rows should be greater than zero.\n");
	}
	else{
	for(int i = 1;i<=n;i++){
		for(int s = i;s<n;s++){
			printf("   ");
		}
		num = 1;
		for(int j =1;j<=i;j++){
			printf("%d  ",j);
		}
		for(int j = i-1;j>=1;j--){
			printf("%d  ",j);
		}
		printf("\n");
	}
}
	return 0;
}