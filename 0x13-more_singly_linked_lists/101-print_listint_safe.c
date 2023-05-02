#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list, even if it has a loop
 * @head: pointer to the head of the listint_t list
 *
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head;
	const listint_t *fast = head;
	size_t count = 0;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		printf("[%p] %d\n", (void *)slow, slow->n);

		count++;

		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				printf("[%p] %d\n", (void *)slow, slow->n);
				count++;
				slow = slow->next;
				fast = fast->next;
			}
			printf("[%p] %d\n", (void *)slow, slow->n);
			count++;
			exit(98);
		}
	}

	while (slow != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		slow = slow->next;
	}
	return (count);
}
