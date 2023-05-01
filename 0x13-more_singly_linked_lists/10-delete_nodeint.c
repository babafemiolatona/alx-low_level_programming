#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given position
 * in a listint_t linked list
 *
 * @head: A pointer to a pointer to the first node of the list
 * @index: The index of the node that should be deleted, starting at 0
 *
 * Return: 1 if the deletion succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *prev;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		current = *head;
		*head = current->next;
		free(current);
		return (1);
	}
	else
	{
		for (i = 0, current = *head; current != NULL && i < index; i++,
		prev = current, current = current->next)
		;
		if (current == NULL)
		{
			return (-1);
		}
	}
	prev->next = current->next;
	free(current);
	return (1);
}
