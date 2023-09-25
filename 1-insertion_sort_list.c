#include "sort.h"

/**
 * insertion_sort_list - Sort array with insertion method.
 * @list: a duble linked list.
 * Return: no return.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head, *left, *right, *tail1, *tail2;

	if (list == NULL || *list == NULL)
		return;
	head = *list;
	while (head != NULL)
	{right = head, left = head->prev, tail1 = head;
		while (tail1 && tail1->prev)
		{right = tail1, left = tail1->prev;
			if (left->n > right->n)
			{
				if (right->next == NULL && left->prev == NULL)
				{
					left->next = NULL, right->prev = NULL;
					right->next = left, left->prev = right, *list = right;
				}
				else if (right->next == NULL)
				{
					left->prev->next = right, right->prev = left->prev;
					left->next = NULL, right->next = left, left->prev = right;
				}
				else if (left->prev == NULL)
				{
					right->prev = NULL, left->next = right->next, right->next->prev = left;
					right->next = left,	left->prev = right, *list = right;
				}
				else
				{
					left->prev->next = right, right->prev = left->prev;
					left->next = right->next, right->next->prev = left;
					right->next = left, left->prev = right;
				}
				print_list(*list), tail2 = left, left = right, right = tail2;
			}
			else
				break;
			tail1 = right, tail1 = tail1->prev;
		}
		head = tail1, head = head->next;
	}
}
