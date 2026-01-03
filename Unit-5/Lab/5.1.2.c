#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure to store student information
struct Student {
    char name[50];
	float marks;
};



// Function to sort student records based on marks
void sortStudents(struct Student* students, int n) {
   struct Student temp;
	for(int i = 0;i<n-1;i++){
		for(int j = i+1;j<n;j++){
			if(students[i].marks>students[j].marks){
				temp = students[i];
				students[i] = students[j];
				students[j] = temp;
			}
		}
	}
}

int main() {
    int n;
    scanf("%d", &n);
    // Dynamically allocate memory for student records
    struct Student* students = (struct Student*)malloc(n * sizeof(struct Student));
    // Input student information
    for (int i = 0; i < n; i++) {
        scanf("%s", students[i].name);
        scanf("%f", &students[i].marks);
    }
    // Sort student records based on marks
    sortStudents(students, n);
    // Print sorted student records
    for (int i = 0; i < n; i++) {
        printf("%s : %.2f\n", students[i].name, students[i].marks);
    }
    // Free dynamically allocated memory
    free(students);

    return 0;
}