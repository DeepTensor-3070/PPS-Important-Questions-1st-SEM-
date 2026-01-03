void read1(int *p,int n){
	for(int i = 0;i<n;i++){
		scanf("%d",&p[i]);
	}
}

void displayInReverse(int *p,int n){
	for(int i = n-1;i>=0;i--){
		printf("%d ",p[i]);
	}
}