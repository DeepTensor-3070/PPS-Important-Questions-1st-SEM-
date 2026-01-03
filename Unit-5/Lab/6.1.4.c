#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to replace a specific line in a file
void replaceLine(char* filePath, int lineNum, char* newText) {
	FILE *fp, *temp;
    char buffer[1024];
    int currentLine = 1;

    fp = fopen(filePath, "r");
    if (fp == NULL) {
        return;
    }

    temp = fopen("temp.txt", "w");
    if (temp == NULL) {
        fclose(fp);
        return;
    }

    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        if (currentLine == lineNum) {
            fputs(newText, temp);
            fputc('\n', temp);
        } else {
            fputs(buffer, temp);
        }
        currentLine++;
    }

    fclose(fp);
    fclose(temp);

    remove(filePath);
    rename("temp.txt", filePath);
}

// Function to print the contents of a file
void printFile(char* filePath) {
    FILE *fp;
    int ch;

    fp = fopen(filePath, "r");
    if (fp == NULL) {
        return;
    }

    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
	printf("\n");

    fclose(fp);
}

int main() {
    char filePath[100];
    int lineNum;
    char newText[1000];
    scanf("%s", filePath);
    scanf("%d", &lineNum);
    scanf("\n"); // Consume newline character
    fgets(newText, sizeof(newText), stdin);
    newText[strcspn(newText, "\n")] = 0; // Remove the newline character
    replaceLine(filePath, lineNum, newText);
    printFile(filePath);
    return 0;
}