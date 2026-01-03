#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char ch;
    int count = 0;

    // Read filename
    scanf("%s", filename);

    // Open file
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening the file. Make sure the file exists.\n");
        return 0;
    }

    // Count characters until '@'
    while ((ch = getc(fp)) != EOF) {
        if (ch == '@')
            break;
        count++;
    }

    printf("%d\n", count);

    fclose(fp);
    return 0;
}


