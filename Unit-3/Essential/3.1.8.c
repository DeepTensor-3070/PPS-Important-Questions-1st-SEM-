#include <stdio.h>
int main(){

	int n;
	scanf("%d",&n);
	for(int i = 1;i<=n;i++){
		if(i%2==1){
			int num = 1;
			for(int j = 1;j<=i;j++){
				printf("%d ",num);
				num +=2;
			}
		}
		else{
			int num = 2;
			for(int j = 1;j<=i;j++){
				printf("%d ",num);
				num +=2;
				
			}
		}
		printf("\n");
		}
	
	return 0;
}