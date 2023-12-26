#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int number;
	struct node *next;
}node;
int main(void)
{
	int number;
	node *list = NULL; /* a list storing only the index the first node, List is not a node it initializes the linked list*/
	node *n = malloc(sizeof(node)); /* First node which stores the value number 1 */
		if (n == NULL)
		{
			return 1;
		}
		n->number = number; /* if node != null store value 1 in the data of the next node */
		n->next = NULL; /* first node point to a null node 2 */
		list = n; /* point list to the first node */
		n = malloc(sizeof(node));
		if (n == NULL)
		{
			free(list); /* free the list memory */
			return 1;
		}
		n->number = number; /* if node != null store value 2 in the data of next node */
		n->next = NULL;
		list->next = n; /* first node point to the second*/
		free(list->next); /* always remember to free memory after */
}
