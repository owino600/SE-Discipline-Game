#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	char name[20];
	float *marks;
	char *comments;

	strcpy(name, "Daniel");

	marks = calloc(10, sizeof(float));
	if (marks == NULL)
	{
		fprintf(stderr, "Failed to allocate memory\n");
	}
	printf("Enter the marks\n");
	printf("\nStatistics: ");
	scanf("%f\n", marks);
	printf("\nDatabase Management: ");
	scanf("%f\n", marks);
	printf("\nComputer literacy: ");
	scanf("%f\n", marks);
	free (marks);

	comments = malloc(20 * sizeof(char));
	if (comments == NULL)
	{
		fprintf(stderr, "Failed to allocate");
	}
	strcpy(comments, "Well Done");

	printf("Student Name: %s\n", name);
	printf("Teacher's Comments: %s\n", comments);
	free (comments);
}
