#include <stdio.h>

void main() {
    FILE *fp;
    int len;
    char str[100], str1[100];

    fp = fopen("sample-file.txt", "w"); // open the file in write mode
    printf("Enter a text : ");
    
    gets(str); // read the string using gets  (allowed in this assignment)

    fputs(str, fp); // put the string into file 

    fclose(fp); // close the file

    fp = fopen("sample-file.txt", "r"); // open the file in read mode
    printf("The given text : ");

    fgets(str1, 100, fp); // get data into str1

    puts(str1); // display the data in str1

    fclose(fp); // close the file


    fp = fopen("sample-file.txt", "r");
    fseek(fp, 0, SEEK_END); // move pointer to end

    len = ftell(fp);
    printf("Total size of sample-file.txt = %d bytes\n", len);

    rewind(fp);
    len = ftell(fp);
    printf("Now the file pointer is at position : %d\n", len);

    fclose(fp);
}

