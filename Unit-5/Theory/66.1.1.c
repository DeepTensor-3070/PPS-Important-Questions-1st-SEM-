#include <stdio.h>
void main() {
	struct book {
		char name[30];
		int pages;
		float price;
	};
	struct book b[5];
	int i, n;
	printf("Enter number of books : ");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("Enter the book-%d name : ", i);
		scanf("%s",b[i].name); // Write the correct code
		printf("Enter number of pages in book-%d : ", i);
		scanf("%d",&b[i].pages); // Write the correct code
		printf("Enter book-%d price : ", i);
		scanf("%f",&b[i].price); // Write the correct code
	}
	printf("Given books details are\n");
	for (i = 0; i < n; i++) {
		printf("Book-%d Name : %s\tPrice : %f\tPages : %d\n", i,b[i].name,b[i].price,b[i].pages); // Write the correct code
	}
}