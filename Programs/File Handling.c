// 72.1.1 
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

// F_SEEK F_TELL
#include <stdio.h>

int main() {
    FILE *fp;
    long position;
    char ch;

    fp = fopen("sample.txt", "w+");

    if (fp == NULL) {
        printf("File cannot be opened\n");
        return 1;
    }

    // Write data to file
    fputs("File Handling in C", fp);

    // Get current position
    position = ftell(fp);
    printf("File pointer position after writing: %ld\n", position);

    // Move file pointer to beginning
    fseek(fp, 0, SEEK_SET);

    // Read first character
    ch = fgetc(fp);
    printf("First character in file: %c\n", ch);

    // Move file pointer 5 bytes from beginning
    fseek(fp, 5, SEEK_SET);
    printf("Character at position 5: %c\n", fgetc(fp));

    fclose(fp);
    return 0;
}

// COUNT CHARACTERS , WORDS AND LINES IN A FILE 
#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    fp = fopen("input.txt", "r");

    if (fp == NULL) {
        printf("File cannot be opened\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        // Count lines
        if (ch == '\n') {
            lines++;
        }

        // Count words
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            words++;
        }
    }

    fclose(fp);

    printf("Characters = %d\n", characters);
    printf("Words = %d\n", words);
    printf("Lines = %d\n", lines);

    return 0;
}

// RENAME FILE
#include <stdio.h>

int main() {
    char oldName[100], newName[100];

    printf("Enter old file name: ");
    scanf("%s", oldName);

    printf("Enter new file name: ");
    scanf("%s", newName);

    if (rename(oldName, newName) == 0) {
        printf("File renamed successfully\n");
    } else {
        printf("Error: Unable to rename file\n");
    }

    return 0;
}
