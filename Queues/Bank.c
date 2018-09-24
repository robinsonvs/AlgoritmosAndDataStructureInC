#include <stdio.h>
#include "Queue.h"

int main( int argc, char *argv[]) {
	struct Queue queue;
	int element;
	
	create(&queue);
	
	enqueue(&queue, 345);
	enqueue(&queue, 917);
	enqueue(&queue, 14);
	enqueue(&queue, 872);
	enqueue(&queue, 5763);
	enqueue(&queue, 2);
	
	printf("Queue result :");
	
	while (!isEmpty(queue)) {
		element = dequeue(&queue);
		printf("value : %d\n", element);
	}
	
	return 0;
	
}
