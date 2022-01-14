#include "stack.h"


void
init(Stack *stack)
{
	stack->top = 0;
		stack->elements=(char*)calloc(0,sizeof(char)*STACK_SIZE);
	
}

int
full(Stack *stack)
{
	return (stack->top > (STACK_SIZE - 1));
}

int
empty(Stack *stack)
{
	return (stack->top == 0);
}

int
push(Stack *stack, char element)
{
	if (full(stack)) {
		return 0;
	}
	else {
		stack->elements[stack->top] = element;    
    stack->top++;
		return 1;
	}
}

int
pop(Stack *stack)
{
	if (empty(stack)) {
		return 0;
	}
	else {
		stack->top--;
  	char element;
    element = stack->elements[stack->top];
    printf("%c",element);
		return 1;
	}
}

int top(Stack* stack){
  char element;
  element = stack->elements[stack->top-1];
    printf("%c",element);
  return 0;
}
