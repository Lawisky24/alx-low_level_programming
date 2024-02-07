#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t linked list safely
 * @h: pointer to the pointer to the first node of the list
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *slow, *fast, *temp;
	size_t size = 0;

	if (h == NULL || *h == NULL)
		return (0);

	slow = *h;
	fast = *h;

	while (fast != NULL && fast->next != NULL)
	{
		temp = slow;
		slow = slow->next;
		fast = fast->next->next;

		size++;

		if (slow == fast)
		{
		/* Loop detected, free memory and set head to NULL */
		slow = *h;
		while (slow != fast)
		{
			temp = fast;
			fast = fast->next;
			free(temp);
			size--;
		}

		*h = NULL;
		return (size);
		}
	}

	/* No loop, free the entire list */
	while (*h != NULL)
	{
		temp = *h;
		*h = (*h)->next;
		free(temp);
		size++;
	}

	return (size);
}
