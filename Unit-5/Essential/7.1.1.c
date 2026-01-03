// Program719a.c

int myStrLen(char str[]) {
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}

int myStrCmp(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
        i++;
    }
    return (str1[i] - str2[i]);
}

void myConcat(char str1[], char str2[]) {
    int i = 0, j = 0;

    // Move i to end of str1
    while (str1[i] != '\0')
        i++;

    // Append characters of str2
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0'; // null-terminate
}

void myStrCpy(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

