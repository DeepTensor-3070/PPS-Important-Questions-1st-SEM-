#include <stdio.h>

int main() {
    char str[100], ch;
    int count = 0;

    printf("Enter a string : ");
    scanf("%s", str);

    printf("Enter the character : ");
    scanf(" %c", &ch);  

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch)
            count++;
    }

    if (count > 0)
        printf("Occurences of '%c' = %d\n", ch, count);
    else
        printf("'%c' is not present in %s\n", ch,str);

    return 0;
}

