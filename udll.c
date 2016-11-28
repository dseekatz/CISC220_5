#include<stdlib.h>
#include<stdio.h>

/* This file defines the node structure for a doubly linked list
 * as well as four functions to manipulate doubly linked lists
 */

/* Union definition for data to be stored in node structure
 * Move this to udll.h */
union Data {
	int d;
	int* ptrd;
	float f;
	float* ptrf;
	char c;
	char* ptrc;
}; /* End union */

/* Linked list node structure */
struct Node {
	struct Node* prev;
	union Data data;
	struct Node* next;
}; /* End structure */

/* We don't want to have to type "struct" all the time */
typedef struct Node Node;

/* Head and last node global variable definitions.  Head node ALWAYS contains an int
 * describing the length of the list.
 */
/* Please move these definitions to main.c before assignment submission */
Node head = {NULL,{2},NULL};
Node last = {NULL,{0},NULL};

/* length function */
int length() {
	return head.data.d;
} // end length

/* The main function should be moved to main.c before assignment submission */
int main() {
	
} /* End main */
