#include<stdlib.h>
#include "udll.h"

/* This file gives the concrete function definitions for the four required functions */

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
		for (i = 0; i < index; i++) {
			ptr=(*ptr).prev;
		} // end for loop
		return (*ptr).data;
	} // end conditional
} // end get
