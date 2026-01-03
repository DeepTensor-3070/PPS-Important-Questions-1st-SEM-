#include <stdio.h>
int main(){
	int n,rev = 0,rem,temp;
	printf("Enter an integer : ");
	scanf("%d",&n);
	temp = n;
	while(n!=0){
		rem = n%10;
		rev = rev*10+rem;
		n = n/10;
	}
	printf("The reverse of a given number : %d\n",rev);
	if(rev == temp) printf("%d is a palindrome\n",temp);
	else printf("%d is not a palindrome\n",temp);
	return 0;
}