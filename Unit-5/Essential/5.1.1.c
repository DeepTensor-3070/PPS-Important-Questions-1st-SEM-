#include <stdio.h>
int main(){
	char s[100];
	char *ptr;
	int l = 0;
	fgets(s,sizeof(s),stdin);
	ptr = s;
	while(*ptr != '\0'){
		if(*ptr == '\n') break;
		l++;
		ptr++;
	}
	printf("%d",l);
	return 0;
}