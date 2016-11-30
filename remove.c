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
	listLength = length();
	mid = listLength / 2;
	int i = 0;
	if (index <= mid) {
		ptr = head;
		ptr2 = head.next;
		while (i < index) {
			ptr = ptr.next;
			ptr2 = ptr2.next
		}
		ptr2 = ptr2.next;
		ptr.next = &ptr2;
		ptr2.prev = &ptr;
	}
	else {
		ptr = last;
		ptr2 = last.prev;
		while (i > index) {
			ptr = ptr.prev;
			ptr2 = ptr2.prev
		}
		ptr2 = ptr2.prev;
		ptr.prev = @ptr2
		ptr2.next = &ptr;

	}

}
int main() {
	printf("%d\n",length());
} /* End main */
