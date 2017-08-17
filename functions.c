#include "monty.h"

extern dlist_t gs; /*global structure*/

void myexit(int code, char *string)
{
	switch(code)
	{
		case 1:
			printf("USAGE: monty file");
		case 2:
			printf("Error: Cant't open file %s\n", string);
		case 3:
			printf("L%d: unknown instruction %s\n", gs.ln, string);
		case 4:
			printf("L%d: usage: push integer\n", gs.ln);
		case 5:
			printf("Error: malloc failed\n");
		case 6:
			printf("L%d: can't pint, stack empty\n", gs.ln);
		case 7:
			printf("L%d: can't pop an empty stack\n", gs.ln);
		case 8:
			printf("L%d: can't swap, stack too short\n", gs.ln);
		case 9:
			printf("L%d: can't add, stack too short\n", gs.ln);
		exit(EXIT_FAILURE);
	}

}
void pall(void)
{
	unsigned int i = 0;
	stack_t *list = gs.head;

	for (; list; list = list->next, i++)
	{
		printf("%d\n", list->n);
	}
}

void pint(void)
{
	stack_t *list = gs.tail;

	printf("%d\n", list->n);
}
