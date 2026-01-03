#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int m[n][n];
	for(int i = 0;i<n;i++){
		for(int j = 0;j<n;j++){
			scanf("%d",&m[i][j]);
		}
	}
	for(int i = 0;i<n;i++){
		for(int j = 0;j<n;j++){
			if(i != j){
				printf("%d ",m[j][i]);
			}
		}
	}
    return 0;
}