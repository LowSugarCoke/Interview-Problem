#ifndef	STACK_
#define	STACK_

#include <stdlib.h>
#include <stdio.h>
#define	STACK_SIZE	5

typedef	struct	{
	int	top;
	char*	elements;
} Stack;

void	init(Stack *stack);
int	full(Stack *stack);
int	empty(Stack *stack);
int	push(Stack *stack, char element);
int	pop(Stack *stack);
int top(Stack* stack);



#endif	/* _STACK_ */

