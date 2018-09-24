
struct Stack {
	int top;
	int values[10];
};

void create(struct Stack *stack);
void push(struct Stack *stack, int element);
int pop(struct Stack *stack);
int isEmpty(struct Stack stack);
int isFull(struct Stack stack);
