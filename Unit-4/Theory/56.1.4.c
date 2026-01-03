void read1(int *p,int *q){
	printf("Enter two integer values : ");
	scanf("%d %d",p,q);
}
int minimum(int *a,int *b){
	if(*a>*b) return *b;
	else return *a;
}