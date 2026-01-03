#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char ch;

    // Read file name
    scanf("%s", filename);

    // Try to open file
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening the file. Make sure the file exists.\n");
        return 0;
    }

    // Read and display contents until '@'
	printf("Contents of the file:\n");
    while ((ch = getc(fp)) != EOF) {
        if (ch == '@')
            break;
        putchar(ch);
    }

    fclose(fp);
    return 0;
}




