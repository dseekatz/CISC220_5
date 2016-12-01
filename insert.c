#include<stdlib.h>
#include<stdio.h>

union Data {
	int d;
	int* ptrd;
	float f;
	float* ptrf;
	char c;
	char* ptrc;
}; /* End union */
struct Node {
	struct Node* prev;
	union Data data;
	struct Node* next;
}; /* End structure */
typedef struct Node Node;

Node head = {NULL,{2},NULL};
Node last = {NULL,{0},NULL};

int length() {
	return head.data.d;
} // end length

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
		newNode.next = &ptr2;
		newNode.prev = &ptr;
		(*ptr).next = &newNode;
		(*ptr2).prev = &newNode;
	} else {
		ptr = &last;
		for (i = 0; i < length() - index; i++) {
			ptr=(*ptr).prev;
			ptr2=(*(*ptr).prev).prev;
		} // end for loop
                newNode.next = &ptr2;
                newNode.prev = &ptr;
                (*ptr).next = &newNode;
                (*ptr2).prev = &newNode;
	} // end conditional
	head.data.d++;
} // end remove function

int main() {
	float floaty = 1.6275;
	union Data n1d, n2d, n3d;
	n1d.d = 5;
	n2d.ptrf = &floaty;
	n3d.c = 'y';
	Node n1 = {&head,n1d,NULL};
	Node n2 = {&n1,n2d,NULL};
	Node n3 = {&n2,n3d,&last};
	n1.next = &n2;
	n2.next = &n3;
	head.data.d = 5;
	head.next = &n1;
	last.prev = &n3;
	insert(2, "hello", 5)

} /* End main */
