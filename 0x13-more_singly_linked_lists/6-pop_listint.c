#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * and returns the head node’s data (n)
 * @head: A pointer to a pointer to the first node of the list
 * Return: The integer data of the head node, or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}

	data = (*head)->n;

	temp = *head;
	*head = (*head)->next;

	free(temp);
	return (data);
}
