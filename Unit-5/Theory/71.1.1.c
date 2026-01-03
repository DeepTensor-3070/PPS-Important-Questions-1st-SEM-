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