#include "SimpleLinkedList.h"
#include <stdio.h>

int main (int argc, char *argv[]) {
	
	struct SimpleLinkedList list;
	int element;
	
	create(&list);
	
	add(&list, 987);
	add(&list, 712);
	add(&list, 543);
	add(&list, 1276);
	add(&list, 7);
	add(&list, 99);
	
	while (!isEmpty(list)) {
		element = clear(&list);
		printf("Element removed : %d\n", element); 
	}
	
	return 0;
}
