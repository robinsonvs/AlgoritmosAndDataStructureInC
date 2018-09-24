
#include "Stack.h"

void create (struct Stack *stack) {
	stack -> top = -1;
}

void push (struct Stack *stack, int element) {
	stack -> top++;
	stack -> values[stack -> top] = element;
}

int pop (struct Stack *stack) {
	int element = stack -> values[stack -> top];
	stack -> top--;
	return element;
}

int isEmpty (struct Stack stack) {
	return (stack.top == -1);
}

int isFull (struct Stack stack) {
	return (stack.top == 9);
}	
