//This function creates a new node and inserts it in a specific spot
//Include this in the universalDoubleLinkedList program after
//need to update with the length function now

#include<stdlib.h>
#include<stdio.h>

//Create a new node 
//doubly linked list
union Data {
	int d;
	int ptrd;
	float f;
	float* ptrf;
	char c;
	char* ptrc;
} //end union

typedef struct Node {
	struct Node* ptr;
	struct Node* ptr2;
	struct Node* newNode;
	union Data data;
	struct Node* next;
}

struct Node *head; //Assign head as start of linked list

void insert(int index, int data) { //union Data data) {
	Node* ptr = new Node();
	Node* newNode;
	newNode.data;
	
	//find length
	length();
	int length = length/2;
	int i = 0;
	ptr = &head;
	Node* ptr2 = ptr.next;
	
	//The index is less than length/2
	if (index < length/2) {
		while (i != index-1) {
			ptr = ptr->next;
			i++
		}
	}
		else {
			(*ptr).ext = &newNode;
			(*newNode).next = ptr2;
			(*newNode).prev = ptr;
			(*ptr2).prev = newNode;
		}
	}
	//The index is greater than length/2
	if (index > length/2) {
		while (i < index) {
			ptr = ptr->next;
			i++
		}
		else {
			ptr.next = &newNode;
			newNode.next = &ptr2;
			newNode.prev = &ptr;
			ptr2.prev = &newNode;
		}
	}
}


//initialize current pointer to head
int i = 0; //start at first element in linked list and traverse
curr = &head;
if(head != NULL) { //as long as there is a linked list
	while(curr->next !=NULL && i !=index) {
		curr = curr->next;
		i++;
}

if(curr == 0) {
//add at head (position 0 is start of the linked list)
newNode->next = head;
}
else if (index > i+1)
	printf("Invalid boundaries"); 

else {
	//pointer equals pointer next
	newNode->next = curr;
	//add some print statements or no?
	}
}
else {
	head = newNode;
	newNode->next = NULL;
}
}

//to test
int main() {
	head = NULL;
	Insert(7,1);
	Insert(5,2);
	Insert(6,2);
	
}
	


