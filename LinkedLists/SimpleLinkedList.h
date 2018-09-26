struct Node {
	int element;
	struct Node *nextNode;
};

struct SimpleLinkedList {
	struct Node *beginNode;
};

void create(struct SimpleLinkedList *list);
void add(struct SimpleLinkedList *list, int element);
int isEmpty(struct SimpleLinkedList list);
int clear(struct SimpleLinkedList *list);
void listAll(struct SimpleLinkedList list);

