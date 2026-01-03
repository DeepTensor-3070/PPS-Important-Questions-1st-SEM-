// Example of Student
#include <stdio.h>

// Define structure
struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    // Declare structure variable
    struct Student s1;

    // Input values
    printf("Enter roll number: ");
    scanf("%d", &s1.roll);

    printf("Enter name: ");
    scanf("%s", s1.name);

    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    // Display values
    printf("\nStudent Details:\n");
    printf("Roll No: %d\n", s1.roll);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}

// NESTED STRUCTURE 71.1.1
#include <stdio.h>


// Define a structure for a student's address
struct Address {
	// Write your code here...
	char street[100];
	char city[50];
	char state[50];
};

// Define a structure for a student
struct Student {
	// Write your code here...
	int id;
	char name[100];
	struct Address address;
};

int main() {
	struct Student s;
	// Write your code her...
	scanf("%d", &s.id);
    scanf(" %[^\n]", s.name);
    scanf(" %[^\n]", s.address.street);
    scanf(" %[^\n]", s.address.city);
    scanf(" %[^\n]", s.address.state);

    // Output student details
    printf("%d\n", s.id);
    printf("%s\n", s.name);
    printf("%s\n", s.address.street);
    printf("%s\n", s.address.city);
    printf("%s\n", s.address.state);
	return 0;
}

// ARRAY OF STRUCTURES 68.1.1
#include <stdio.h>

union employee {        // Define a data type employee
    int age;            // declare age
    float salary;       // declare salary
    char marital_status;// declare marital_status
};

int main() {
    union employee e1;

    printf("Enter employee's age : ");
    scanf("%d", &e1.age);   // read age of the employee
    printf("Age of the employee : %d\n", e1.age);

    printf("Enter employee's salary : ");
    scanf("%f", &e1.salary); // read salary
    printf("Salary of the employee : %f\n", e1.salary);

    printf("Enter employee's marital status (y|n) : ");
    scanf(" %c", &e1.marital_status); // read marital_status
    printf("Marital status of the employee : %c\n", e1.marital_status);

    return 0;
}

//POINTER TO STRUCTURES (DMA)
#include <stdio.h>
#include <stdlib.h>

// Define structure
struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student *ptr;

    // Dynamic memory allocation
    ptr = (struct Student *)malloc(sizeof(struct Student));

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Input values
    printf("Enter student ID: ");
    scanf("%d", &ptr->id);

    printf("Enter student name: ");
    scanf(" %[^\n]", ptr->name);

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    // Display values
    printf("\nStudent Details:\n");
    printf("ID: %d\n", ptr->id);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);

    // Free allocated memory
    free(ptr);

    return 0;
}
