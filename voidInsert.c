//This function creates a new node and inserts it in a specific spot
//Include this in the universalDoubleLinkedList program after
//need to update with the length function now

#include<stdlib.h>
#include<stdio.h>

//Create a new node
struct Node {
	int data;
	struct Node* next;
}

struct Node *head; //Assign head as start of linked list

void insert(int index, union Data data) {
	Node* curr = new Node();
	Node* newNode;
	newNode.data; 

//initialize current pointer to head
int i = 0; //start at first element in linked list and traverse
curr = head;
if(head != NULL) { //as long as there is a linked list
	while(curr->next !=NULL && i !=index) {
		curr = curr->next;
		i++;
}

if(curr == 0) {
//add at head (position 0 is start of the linked list)
}
else if (index > i+1)
	printf("Invalid boundaries"); 

else {
	//pointer equals pointer next
	prev->next = newNode;
	newNode->next = curr;
	printf("Node added at: ");
	}
}
else {
	head = newNode;
	newNode->next = NULL;
}
}

//to test
int main() {
	i=0;
	head = NULL;
	Insert(7,1);
	Insert(5,2);
	Insert(6,2);
	
}
	


