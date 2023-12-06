#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char names[50];
	char *description;
	strcpy(names, "DANTE");

	description = malloc(40 * sizeof(char));
	if (description == NULL)
	{
		fprintf(stderr, "memory not allocated\n");
	}
	else
	{
		strcpy(description, "He is the best student with most marks ");
	}
	description = realloc(description, 50 * sizeof(char));
	if (description == NULL)
	{
		fprintf(stderr, "memory not allocated");
	}
	else
	{
		strcat(description, "scored in the class");
	}
	printf("Name = %s\n", names);
	printf("description = %s\n", description);

	free(description);
}
