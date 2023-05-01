#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 *
 * @head: double pointer to the head of the list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;

	if (*head == NULL)
	{
		free(*head);
		*head = NULL;
		return;
	}

	free_listint2(&((*head)->next));
	free(*head);
	*head = NULL;
}
