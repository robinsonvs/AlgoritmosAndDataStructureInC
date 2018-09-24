#include <stdio.h>
#include "Stack.h"

int main (int argc, char *argv[]) {
	int value, rest;
	struct Stack stack;
	
	create(&stack);
	
	printf("Enter a value:");
	scanf("%d", &value);
	
	while (value != 0) {
		rest = value % 2;
		push(&stack, rest);
		value = value / 2;
	}
	
	while (!isEmpty(stack)) {
		rest = pop(&stack);
		printf("%d", rest);
	}
	
	printf("\n\n");
	
	return 0;
}
