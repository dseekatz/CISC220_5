#define UDLL_H
#include<stdlib.h>

/* This file defines the node structure for a doubly linked list
 * and provides the function headers for the four required functions
 */

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

/* Define head and last nodes */
Node head = {NULL,{2},NULL};
Node last = {NULL,{0},NULL};

/* Define the four function headers */
void insert(int index, union Data data);

void remove(int index);

union Data get(int index);

int length();
