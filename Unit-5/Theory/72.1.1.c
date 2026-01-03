#include <stdio.h>
void main() {
	FILE *fp;
	char ch;
	fp = fopen("FileExample1.txt","w");// open the file FileExample1.txt in write mode
	printf("Enter the text with # at end : ");
	while((ch = getchar()) != '#') { // complete the condtion character not equal to #
		putc(ch,fp); // put the character into the file fp
	}
	putc(ch, fp);
	fclose(fp); // close the file
	fp = fopen("FileExample1.txt", "r"); //open the file in read mode
	printf("Given message is : ");
	while((ch = getc(fp)) != '#') { // complete the condtion here
		putchar(ch); // complete the condtion here
	}
	printf("\n");
	fclose(fp); // close the file
}