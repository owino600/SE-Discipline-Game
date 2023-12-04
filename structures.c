#include <stdio.h>
#include <string.h>
struct Books
{
	char title[50];
	char Author[50];
	int book_id;
}Books;
void printbooks(struct Books *book);
int main()
{
	struct Books book1;
	/* book1 specification */
	strcpy(book1.title, "Discipline to Programmers");
	strcpy(book1.Author, "Dante");
	book1.book_id = 12330;
	/* to add new books */
	printf("Book Name: ");
	scanf(" %49[^\n]", book1.title);
	printf("Book Author: ");
	scanf(" %49[^\n]", book1.Author);
	printf("Book ID: ");
	scanf(" %d", &book1.book_id);
	while ((getchar()) != '\n');
	/* Print book1 information */
	printbooks(&book1);
	return (0);
}
void printbooks(struct Books *book)
{
	printf("Book title: %s\n", book->title);
	printf("Book Author: %s\n", book->Author);
	printf("Book ID : %d\n", book->book_id);
}
