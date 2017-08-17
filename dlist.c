#include "monty.h"
#include <string.h>
extern dlist_t gs;
void dlist_init(void)
{
	gs.size = 0;
	gs.ln = 0;
	gs.head = NULL;
	gs.tail = NULL;
	gs.fd = NULL;
	gs.buffer = NULL;
}

void dlist_destroy(void)
{
	while (gs.size > 0) /* remove each element */
		dlist_remove(gs.tail);
}

int dlist_remove(stack_t *node)
{
	if (node == NULL || gs.size == 0)
		return (-1);
	/*remove element from gs*/
	if (node == gs.head)/* handle removal from head of the list*/
	{
		gs.head = node->next;

		if (gs.head == NULL)
			gs.tail = NULL;
		else
			node->next->prev = NULL;
	}
	else/* handle removal from other than head in gs*/
	{
		node->prev->next = node->next;

		if (node->next == NULL)
			gs.tail = node->prev;
		else
			node->next->prev = node->prev;
	}
	free(node);
	gs.size--;

	return 0;
}

int dlist_ins_end(const unsigned int data)
{
	stack_t *new_node, *node;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
		return (-1);
	/* Add new element into dlist_t */
	new_node->n = data;

	if (gs.size == 0)/*if list is empty*/
	{
		gs.head = new_node;
		gs.head->prev = NULL;
		gs.head->next = NULL;
		gs.tail = new_node;
	}
	else/* -node->prev- -new_node- -node->next- */
	{
		node = gs.tail;
		new_node->next = node->next;
		new_node->prev = node;
		gs.tail = new_node;
		node->next = new_node;
	}
	gs.size++;

	return (0);
}


int dlist_ins_beg(const unsigned int data)
{
	stack_t *new_node, *node;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
		return (-1);
	/* Add new element into dlist_t */
	new_node->n = data;

	if (gs.size == 0)/*if list is empty*/
	{
		gs.head = new_node;
		gs.head->prev = NULL;
		gs.head->next = NULL;
		gs.tail = new_node;
	}
	else/* -node->prev- -new_node- -node->next- */
	{
		node = gs.head;
		new_node->next = node;
		new_node->prev = node->prev;
		gs.head = new_node;
		node->prev = new_node;
	}
	gs.size++;

	return (0);
}
