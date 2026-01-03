#include <stdio.h>
void main() {
	FILE *fp, *fp1, *fp2;
	char ch, SampleFile2[10];
	fp = fopen("SampleFile1.txt", "w");
	printf("Text for SampleFile1.txt with @ at end: ");
	while ((ch = getchar()) != '@') {
		putc(ch, fp);
	}
	putc(ch, fp);
    fclose(fp);

    // Rename file
    printf("new file name: ");
    scanf("%s", SampleFile2);

    rename("SampleFile1.txt", SampleFile2);

    fp2 = fopen(SampleFile2, "r");

    printf("Text of %s: ", SampleFile2);

    // Print file content but stop before '@'
    while ((ch = getc(fp2)) != EOF) {
        if (ch == '@')
            break;
        putchar(ch);
    }
	printf("\n");

    fclose(fp2);
}
