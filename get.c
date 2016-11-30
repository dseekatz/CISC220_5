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
/* Please move these definitions to udll.h before assignment submission */
Node head = {NULL,{2},NULL};
Node last = {NULL,{0},NULL};

/* length function */
int length() {
	return head.data.d;
} // end length

// get function
union Data get(int index) {
	Node* ptr = NULL;
	int i;
	if (index <= length() / 2) {
		ptr = &head;
		for (i = 0; i < index; i++) {
			ptr=(*ptr).next;
		} // end fot loop
		return (*ptr).data;
	} else {
		ptr = &last;
		for (i = 0; i < length() - index - 1; i++) {
			ptr=(*ptr).prev;
		} // end for loop
		return (*ptr).data;
	} // end conditional
} // end get

/* The main function should be moved to main.c before assignment submission */
int main() {
	float floaty = 1.6275;
	union Data n1d, n2d, n3d;
	n1d.d = 5;
	n2d.ptrf = &floaty;
	n3d.c = 'y';
	printf("%c\n",n3d.c);
	Node n1 = {&head,n1d,NULL};
	Node n2 = {&n1,n2d,NULL};
	Node n3 = {&n2,n3d,&last};
	n1.next = &n2;
	n2.next = &n3;
	head.data.d = 5;
	head.next = &n1;
	last.prev = &n3;	
	union Data stuff = get(1);
	printf("%d\n",stuff.d);
	stuff = get(2);
	printf("%f\n",*(stuff.ptrf));
	stuff = get(3);
	printf("%c\n",stuff.c);
} /* End main */
