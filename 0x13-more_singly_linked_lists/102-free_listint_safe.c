size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *current, *temp;

	if (!h || !(*h))
		return (0);

	current = *h;
	while (current)
	{
		if (current < current->next)
		{
			temp = current->next;
			free(current);
			current = temp;
			len++;
		}
		else
		{
			len++;
			break;
		}
	}

	*h = NULL; /* Set the head to NULL after freeing the list */

	return (len);
}
