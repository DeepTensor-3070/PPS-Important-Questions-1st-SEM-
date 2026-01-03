#include <stdio.h>
struct book {
	char name[30];
	float price;
	int pages;
};

int main() {
    struct book b;

    printf("Enter the name of the book : ");
    scanf("%s", b.name);

    printf("Enter the price of the book : ");
    scanf("%f", &b.price);

    printf("Enter the number of pages in the book : ");
    scanf("%d", &b.pages);

    printf("Book name = %s\n", b.name);
    printf("Book price = %f\n", b.price);
    printf("Number of pages in the book = %d\n", b.pages);

    return 0;
}