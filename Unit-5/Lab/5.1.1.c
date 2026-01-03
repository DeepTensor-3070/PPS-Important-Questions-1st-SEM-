#include <stdio.h>
#include <string.h>

struct Student {
    char name[30];
    char department[20];
    int yearOfStudy;
    float cgpa;
};

int main() {
    int n, i, j;
    struct Student s[100], temp;

    printf("Enter the number of students : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter the details of student - %d\n", i + 1);

        printf("Enter name : ");
        scanf("%s", s[i].name);

        printf("Enter department : ");
        scanf("%s", s[i].department);

        printf("Enter year of study : ");
        scanf("%d", &s[i].yearOfStudy);

        printf("Enter cgpa : ");
        scanf("%f", &s[i].cgpa);
    }


    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(s[i].name, s[j].name) > 0) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("Details of students\n");
    for (i = 0; i < n; i++) {
        printf("Student : %d Name : %s\n", i + 1, s[i].name);
        printf("Department : %s Year of study  : %d CGPA  : %.2f\n",
               s[i].department, s[i].yearOfStudy, s[i].cgpa);
    }

    return 0;
}

