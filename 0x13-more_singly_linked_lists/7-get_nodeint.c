#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 *
 * @head: pointer to the first node of the list
 * @index: index of the node to return, starting at 0
 *
 * Return: pointer to the nth node of the list
 * or NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current;

	for (i = 0, current = head; current != NULL &&
	i < index; i++, current = current->next)
	;
	{
		if (i != index || current == NULL)
		{
			return (NULL);
		}
	}
	return (current);
}
