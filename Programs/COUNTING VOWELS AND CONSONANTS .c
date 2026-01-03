#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);


    str[strcspn(str, "\n")] = '\0';

    for (i = 0; i < strlen(str); i++) {
        if (isalpha(str[i])) {
            char ch = tolower(str[i]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || 
                ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);

    return 0;
}

// OCCURENCE OF CHARACTERS 

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};   
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);


    str[strcspn(str, "\n")] = '\0';


    for (i = 0; i < strlen(str); i++) {
        freq[(unsigned char)str[i]]++;
    }

    printf("Character occurrences:\n");
    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("'%c' = %d\n", i, freq[i]);
        }
    }

    return 0;
}

// Alternative: Occurrence of a Specific Character
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int count = 0, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to find: ");
    scanf("%c", &ch);

    for (i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("Occurrence of '%c' = %d\n", ch, count);
    return 0;
}

// COUNT CHARACTERS ,WORDS AND LINES

#include <stdio.h>
#include <string.h>

int main() {
    char str[500];
    int characters = 0, words = 0, lines = 1, i;

    printf("Enter text (press Enter when done):\n");
    fgets(str, sizeof(str), stdin);

    characters = strlen(str);

    for (i = 0; str[i] != '\0'; i++) {
        // Count words
        if ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t') &&
            (str[i + 1] != ' ' && str[i + 1] != '\n' && str[i + 1] != '\t' && str[i + 1] != '\0')) {
            words++;
        }

        // Count lines
        if (str[i] == '\n') {
            lines++;
        }
    }

    // If string is not empty, count first word
    if (characters > 1) {
        words++;
    }

    printf("Characters = %d\n", characters);
    printf("Words = %d\n", words);
    printf("Lines = %d\n", lines);

    return 0;
}
