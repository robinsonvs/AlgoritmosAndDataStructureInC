#include "SimpleLinkedList.h"
#include <stdio.h>
#include <stdlib.h>

void create(struct SimpleLinkedList *list) {
	list -> beginNode = NULL;
}

void add(struct SimpleLinkedList *list, int element) {
	struct Node *newNode;
	struct Node *nodeAux;
	newNode = (struct Node*) malloc(sizeof(struct Node));
	newNode -> nextNode = NULL;
	newNode -> element = element;
	
	if (list -> beginNode == NULL) {
		list -> beginNode = newNode;
	} else {
		nodeAux = list -> beginNode;
		while (nodeAux -> nextNode != NULL) {
			nodeAux = nodeAux -> nextNode;
		}
		nodeAux -> nextNode = newNode;
	}
}

int isEmpty(struct SimpleLinkedList list) {
	return (list.beginNode == NULL);
}

int clear(struct SimpleLinkedList *list) {
	struct Node *nodeAux = list -> beginNode;
	int element = nodeAux -> element;
	list -> beginNode = nodeAux -> nextNode;
	free(nodeAux);
	nodeAux = NULL;
	return element;
}

void listAll(struct SimpleLinkedList list) {
	if (list.beginNode == NULL) {
		printf("Empty List ...");
	} else {
		struct Node *nodeAux = list.beginNode;
		while (nodeAux != NULL) {
			printf("Element : %d \n", nodeAux -> element);
			nodeAux = nodeAux -> nextNode;
		}
	}
}
