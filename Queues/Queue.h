struct Queue {
	int begin;
	int end;
	int total;
	int values[10];
};

void create(struct Queue *queue);
void enqueue(struct Queue *queue, int element);
int dequeue(struct Queue *queue);
int isEmpty(struct Queue queue);
int isFull(struct Queue queue);
