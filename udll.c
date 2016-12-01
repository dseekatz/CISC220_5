#include<stdlib.h>
#include "udll.h"

/* This file gives the concrete function definitions for the four required functions */

/* This function inserts a node into the list at the specified index and updates the
 * length of the list
 */

void insert(int index, union Data data, int type) {
        Node newNode = {NULL, type, data, NULL};
        Node* ptr = NULL;
        Node* ptr2 = NULL;
        int i;
        if (index <= length() / 2) {
                ptr = &head;
                ptr2 = (*ptr).next;
                for (i = 0; i < index - 1; i++) {
                        ptr=(*ptr).next;
                        ptr2=(*ptr2).next;
                } // end for loop
                newNode.next = ptr2;
                newNode.prev = ptr;
                (*ptr).next = &newNode;
                (*ptr2).prev = &newNode;
        } else {
                ptr = &last;
                for (i = 0; i < length() - index; i++) {
                        ptr=(*ptr).prev;
                        ptr2=(*(*ptr).prev).prev;
                } // end for loop
                newNode.next = ptr2;
                newNode.prev = ptr;
                (*ptr).next = &newNode;
                (*ptr2).prev = &newNode;
        } // end conditional
        head.data.d++;
} // end insert function


/* This function removes a node from the list at the specified index and updates the
 * length of the list
 */
void removeNode(int index) {
        Node* ptr = NULL;
        Node* ptr2 = NULL;
        int i;
        if (index <= length() / 2) {
                ptr = &head;
                ptr2 = &head;
                for (i = 0; i < index - 1; i++) {
                        ptr=(*ptr).next;
                        ptr2=(*(*ptr).next).next;
                } // end for loop
                (*ptr).next = ptr2;
                (*ptr2).prev = ptr;
        } // end if
         else {
                ptr = &last;
                for (i = 0; i < length() - index; i++) {
                        ptr=(*ptr).prev;
                        ptr2=(*(*ptr).prev).prev;
                } // end for loop
                (*ptr).prev = ptr2;
                (*ptr2).next = ptr;
        } // end conditional
        head.data.d--;
} // end remove function


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
