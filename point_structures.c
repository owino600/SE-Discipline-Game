#include <stdio.h>
#include <string.h>
struct Books
{
	char title[50];
	char Author[50];
	int book_id;
}Books;

struct Books *book1;

void printbooks();
void enterbooks();

int main()
{

	/* book1 specification */
	strcpy(book1->title, "Discipline to Programmers");
	strcpy(book1->Author, "Dante");
	book1->book_id = 12330;
	enterbooks();
	printbooks();
}
void enterbooks()
{
	/* to add new books */
	printf("Book Name: ");
	scanf(" %49[^\n]", book1->title);
	printf("Book Author: ");
	scanf(" %49[^\n]", book1->Author);
	printf("Book ID: ");
	scanf(" %d", &book1->book_id);
	while ((getchar()) != '\n');
	/* Print book1 information */
	printbooks(&book1);
}
void printbooks()
{
	printf("Book title: %s\n", book1->title);
	printf("Book Author: %s\n", book1->Author);
	printf("Book ID : %d\n", book1->book_id);
}
