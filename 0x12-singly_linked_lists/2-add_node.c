#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * *add_node: function that adds a new node at the beginning of a list_t list.
 * @head:double pointer
 * @str:string
 *
 * return:the address of the new element, or NULL if it failed;
 */

list_t *add_node(list_t **head, const char *str);
{
	list_t *new_node;
	unsigned int lenght = 0;

	while (str[lenght])
		lenght++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->lenght = lenght;
	new->next = (*head);
	(*head) = new;

	return (*head);
}


