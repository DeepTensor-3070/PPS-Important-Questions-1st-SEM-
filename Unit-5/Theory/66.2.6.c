#include <stdio.h>
struct student{
	char name[50];
	int age;
	float height;
};
void read1(struct student *s){
	printf("Enter student name, age and height : ");
	scanf("%s %d %f",s->name,&s->age,&s->height);
}
struct student copyStructureVariable(struct student s1,struct student s2){
	s2 = s1;
	return s2;
}
void display(struct student s2){
	printf("Student name : %s\n",s2.name);
	printf("Age : %d\n",s2.age);
	printf("Height : %f\n",s2.height);
}