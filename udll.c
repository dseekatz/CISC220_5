#include<stdlib.h>
#include "udll.h"

/* This file gives the concrete function definitions for the four required functions */

/* This function inserts a node into the list at the specified index and updates the
 * length of the list
 */
void insert(int index, union Data data) {
// To be written
} // end insert

/* This function removes a node from the list at the specified index and updates the
 * length of the list
 */
void remove(int index) {
// To be written
} // end remove

/* This function returns the length of the linked list (note that the length is stored
 * in the head node)
 */
int length() {
	return head.data.d;
} // end length

/* This function returns the union containing the data stored in the Node at the specified
 * index.
 */
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
