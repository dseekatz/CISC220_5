#ifndef UDLL_H
#define UDLL_H
#include<stdlib.h>

//David Seekatz				16das4 20037710
//Sean Eylott				13se18 10141657
//Simon Ungar        			14seau 10149546
//Brooke Resendes   			13brr2 10141112

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
// type = 0 : union stores int
// type = 1 : union stores int*
// type = 2 : union stores float
// type = 3 : union stores float*
// type = 4 : union stores char
// type = 5 : union stores char*
struct Node {
	struct Node* prev;
	int type;
	union Data data;
	struct Node* next;
}; /* End structure */

/* We don't want to have to type "struct" all the time */
typedef struct Node Node;

/* Declare head and last nodes */
static Node head = {NULL,0,{2},NULL};
static Node last = {NULL,0,{0},NULL};

/* Declare the four function headers */
void insert(int index, union Data data, int type);

void removeNode(int index);

union Data get(int index);

int length();
#endif
