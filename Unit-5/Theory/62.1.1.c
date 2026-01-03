#include <stdio.h>
#include <string.h>
int main(){
	char ch[100];
	printf("Enter a string : ");
	fgets(ch,sizeof(ch),stdin);
	ch[strcspn(ch,"\n")]='\0';
	printf("length %d\n",(int)strlen(ch));
	return 0;
}