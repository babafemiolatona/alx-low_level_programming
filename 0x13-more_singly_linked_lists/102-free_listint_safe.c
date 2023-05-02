#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list safely
 *
 * @h: pointer to the head of the list
 *
 * Return: The size of the list that was freed.
 * The function sets the head to NULL
 */

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *temp;

	if (h == NULL)
	{
		return (size);
	}

	while (*h != NULL)
	{
		if (*h <= (*h)->next)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
		else
		{
			free(*h);
			*h = NULL;
		}
		size++;
	}
	*h = NULL;
	return (size);
}
