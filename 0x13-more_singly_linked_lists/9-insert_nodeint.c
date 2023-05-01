#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * in a listint_t linked list
 *
 * @head: pointer to a pointer to the first node of the list
 * @idx: index of the list where the new node should
 * be added, starting at 0
 * @n: integer data for the new node
 *
 * Return: pointer to the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *current, *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	else
	{
		for (i = 0, current = *head; current != NULL && i < idx - 1; i++,
		current = current->next)
		;
		{
			if (current == NULL || i != idx - 1)
			{
				free(new_node);
				return (NULL);
			}
		}
	}
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
