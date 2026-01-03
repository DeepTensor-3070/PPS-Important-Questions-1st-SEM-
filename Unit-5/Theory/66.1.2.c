#include <stdio.h>
struct student {
	// Write the members of structure
	int regdno;
	int m1,m2,m3;
	int total;
	float avg;
};
void main() {
	struct student s[60];
	int i, n;
	printf("Enter number of students : ");
	scanf("%d", &n);
	for (i=0;i<n;i++) { // Complete the code in for
		printf("Enter regdno, three subjects marks of student-%d: ", i);
		// Read regdno and 3 subjects marks
		scanf("%d %d %d %d",&s[i].regdno,&s[i].m1,&s[i].m2,&s[i].m3);
	}
	for (i=0;i<n;i++) { // Complete the code in for
		// Find Total and Average
		s[i].total = s[i].m1+s[i].m2+s[i].m3;
		s[i].avg = s[i].total/3.0;
		printf("Student-%d Regdno = %d\tTotal marks = %d\tAverage marks = %f\n",i,s[i].regdno,s[i].total,s[i].avg); // Fill the code in printf()
	}
}