#include "Queue.h"

void create(struct Queue *queue) {
	queue -> begin = 0;
	queue -> end = 0;
	queue -> total = 0;
}

void enqueue(struct Queue *queue, int element) {
	queue -> values[queue -> end] = element;
	queue -> end = (queue -> end + 1) % 10;
	queue -> total = queue -> total + 1;
}

int dequeue(struct Queue *queue) {
	int element = queue -> values[queue -> begin];
	queue -> begin = (queue -> begin + 1) % 10;
	queue -> total = queue -> total -1;
	return element;
}

int isEmpty(struct Queue queue) {
	return (queue.total == 0);
}

int isFull(struct Queue queue) {
	return (queue.total == 10);
}
