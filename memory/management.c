#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char names[50];
	char *description;
	int len;

	strcpy(names, "DANTE");

	description = malloc(40 * sizeof(char));
	if (description == NULL)
	{
		fprintf(stderr, "memory not allocated\n");
	}
	else
	{
			/* S1			S2 */
		strcpy(description, "He is the best student with most marks ");/* copy S1 to S2 */
	}
	description = realloc(description, 50 * sizeof(char)); /* dynamically Allocate a new memory if the first one was less */
	if (description == NULL)
	{
		fprintf(stderr, "memory not allocated");
	}
	else
	{
					/* S3 */
		strcat(description, "scored in the class"); /* join S3 to S2 copied in description */
	}
	len = strlen(description);

	printf("Name = %s\n", names);
	printf("description = %s\n", description);
	printf("length of description = %d\n", len);

	free(description);
}
