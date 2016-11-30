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

void remove(int index) {
	ptr = head
	while (ptr->next != NULL) {

	}

int main() {
	printf("%d\n",length());
} /* End main */
