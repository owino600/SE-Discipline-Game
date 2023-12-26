#include <stdio.h>
#include <stdlib.h>

typedef struct list_t
{
	int number;
	struct list_t *next;
}list_t;
list_t *add_node(list_t **head, int number);
size_t print_list(const list_t *h);
int main(void)
{
	list_t *head;
	head = NULL;

	add_node(&head, 1234);
	add_node(&head, 5678);
	print_list(head);
	return (0);
}
list_t *add_node(list_t **head, int number)
{
	list_t *new;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->number = number;
	new->next = (*head);
	(*head) = new;
	return (*head);
}
size_t print_list(const list_t *h)
{
	size_t s = 0;
	while (h)
	{
		if (!h->number)
			printf("[0] (nil)\n");
		else
			printf("%d\n", h->number);
		h = h->next;
		s++;
	}
	return (s);
}
