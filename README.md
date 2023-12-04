C STRUCTURES
- Structure are used to represent a record, allow you to combine data items of different kinds.
*Unlike arrays that only allow you to define a variable that hold several data items of the same kind,in data structures,
we can include data items of different types in one structure.
- To initiate a structure, we use the STRUCT statement
- A STRUCT statement hold more than one member for your program
	struct books
	{
		member definition;
	}books;

ACCESSING STRUCTURE MEMBER
- We use (.) access operator to access any member of a structure.
- The operator is coded between the structure variable name and the structure member that we wish to access.
- strcpy( Book1.title, "C Programming") is used to access member tittle from book1 a variable to structure BOOKS.

STRUCT AS FUNCTION ARGUMENTS
- We pass a structure as a function argument in similar way as you pass any other variable or pointer.
	struct Books
	{
		member definition;
	}Books;
	void printBook( struct Books book )

POINTER TO STRUCTURES
- Defined in very similar way as pointers to any other variables.
	struct Books
	{
		member definition;
	}Books;
	void printBooks(struct Books *book)
- *book is a pointer to structure Books hence the address of Books is stored in book
- To access a member structure using pointer to that structure we use -> operator
- (.)/(-) rep move to or access
- (>) rep pointer
- to access title from the above code we have two ways:
- book->title
- *book.title
- Option one is more preferable to avoid complexity and confusion though they all perform the same function.
- in structures.c we will use structures as function arguments
- next on line will be structures as pointers
