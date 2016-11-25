#include<stdlib.h>

/* This file defines the node structure for a doubly linked list
 * as well as four functions to manipulate doubly linked lists
 */

/* Linked list node structure */
struct Node {
	struct Node* prev;
	union Data {
		int d;
		int* ptrd;
		float f;
		float* ptrf;
		char c;
		char* ptrc;
	} /* End union */
	struct Node* next;
} /* End structure */

/* We don't want to have to type "struct" all the time */
typedef struct Node Node;

/* The main function should be moved to main.c before assignment submission */
int main() {

} /* End main */
