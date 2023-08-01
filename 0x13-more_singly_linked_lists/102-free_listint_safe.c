#include "lists.h"

/**
 * free_listint_safe - Frees a linked list.
 * @h: Pointer to the first node in the linked list.
 *
 * Return: Number of elements in the freed list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *temp;

	while (*h)
	{
		if (*h <= (*h)->next)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
			break; /* Break the loop to avoid infinite loop for a list with a loop */
		}
		else
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
	}

	*h = NULL; /* Set the head to NULL after freeing the list */

	return (len);
}
