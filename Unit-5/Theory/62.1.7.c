#include <stdio.h>
#include <string.h>

int main() {
    char line[200];
    int lines = 0, words = 0, chars = 0;

    printf("Enter lines of text (enter END to complete)\n");

    while (1) {
        fgets(line, sizeof(line), stdin);

        // Remove newline if present (do NOT count newline)
        line[strcspn(line, "\n")] = '\0';

        // Stop when user types END
        if (strcmp(line, "END") == 0)
            break;

        lines++;

        // Count characters INCLUDING spaces
        chars += strlen(line);

        // Count words
        int inWord = 0;
        for (int i = 0; line[i] != '\0'; i++) {
            if (line[i] != ' ' && !inWord) {
                words++;
                inWord = 1;
            }
            else if (line[i] == ' ') {
                inWord = 0;
            }
        }
    }

    printf("Character = %d, Words = %d, Lines = %d\n", chars, words, lines);

    return 0;
}

