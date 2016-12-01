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

void remover(int index) {
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
	} else {
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
	remover(2);

} /* End main */
