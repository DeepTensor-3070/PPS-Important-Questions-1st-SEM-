#include <stdio.h>
struct book {
	char name[30];
	float price;
	int pages;
};
void read1(struct book *);
void display(struct book *);
void main() {
	struct book b;
	read1(&b);
	display(&b);
}
void read1(struct book *b) { // Write the correct code
	printf("Enter a book name : ");
	scanf("%s",b->name ); // Write the correct code
	printf("Enter price of the book : ");
	scanf("%f", &b->price); // Write the correct code
	printf("Enter number of pages in the book : ");
	scanf("%d", &b->pages); // Write the correct code
}
void display(struct book *b) { // Write the correct code
	printf("Given book information is\nName : %s\nNumber of pages: %d\nPrice of the book : %f\n",b->name,b->pages,b->price); // Write the correct code
}