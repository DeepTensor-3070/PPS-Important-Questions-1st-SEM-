#include <stdio.h>
#include <ctype.h>
int main(){
	char ch[100];
	printf("Enter a line of string : ");
	scanf("%[^\n]s",ch);
	for(int i = 0;ch[i];i++){
		ch[i] = tolower(ch[i]);
	}
	int vowel = 0, cons = 0,digit = 0,space = 0;
	for(int i = 0;ch[i];i++){
		if(ch[i] == 'a' ||ch[i] == 'i' ||ch[i] == 'o' ||ch[i] == 'u' ||ch[i] == 'e'){
			vowel++;
		}
		else if(isdigit(ch[i])) digit++;
		else if(isspace(ch[i])) space++;
		else if(isalpha(ch[i])) cons++;
	}
	printf("Vowels = %d\n",vowel);
	printf("Consonants = %d\n",cons);
	printf("Digits = %d\n",digit);
	printf("White spaces = %d\n",space);
	return 0;
}