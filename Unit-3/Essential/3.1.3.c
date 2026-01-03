#include <stdio.h>
void main(){
	int cp,sp;
	scanf("%d",&cp);
	scanf("%d",&sp);
	if(cp>sp) printf("Loss: %d",cp-sp);
	else if(sp>cp) printf("Profit: %d", sp - cp);
	else printf("No Profit No Loss");
}