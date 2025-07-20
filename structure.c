#include <stdio.h>
#include <string.h>

struct Book {
	int pages;
	int ISBN;
	float price;
	char name[30];
	char author[20];
}; // ';' should be included

int main(){
	struct Book book1;
	struct Book book2;
	
	book1.pages = 1000;
	book1.ISBN = 123456789;
	book1.price = 200.0;
	strcpy(book1.name, "The Lord of the Rings");
	strcpy(book1.author, "J R R Tolkein");
	
	printf(" %s\n %s\n %d\n %d\n %f\n", book1.name, book1.author, book1.pages, book1.ISBN, book1.price);
	
	printf("\n");
	
	book2.pages = 1011;
	book2.ISBN = 78456789;
	book2.price = 150.0;
	strcpy(book2.name, "Harry Potter");
	strcpy(book2.author, "J K Rowling");
	
	printf(" %s\n %s\n %d\n %d\n %f\n", book2.name, book2.author, book2.pages, book2.ISBN, book2.price);
	
	return 0;
}
