#include <stdio.h>
#include <string.h>

int isPalindrome(char* str) {
    char* start = str;
    char* end = str + strlen(str) - 1;
	int flag = 1;
	while(start<end){
		if(*start != *end){
			flag = 0;
			break;
		}
		start++;
		end--;
	}
	return flag;
    //code here
}

int main() {
    char str[100];
    scanf("%s", str);
    if (isPalindrome(str)) {
        printf("palindrome\n", str);
    } else {
        printf("Not a palindrome\n", str);
    }
    return 0;
}