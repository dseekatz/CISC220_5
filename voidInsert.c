//This function creates a new node and inserts it in a specific spot
//Include this in the universalDoubleLinkedList program after

#include<stdlib.h>
#include<stdio.h>

//Create a new node
struct Node {
	int data;
	struct Node* next;
}

void insert(int index, union Data data) {
	Node* prev = new Node();
	Node* curr = new Node();
	Node* newNode = new Node();
	newNode data = data;

//initialize current pointer to head
curr = head;
if(head != NULL) { //as long as there is a linked list
	while(curr-> next !=NULL ) {
		prev = curr;
		curr = curr->next;
}

if(pos == 0) {
//add at head (position 0 is start of the linked list)
}
else if (//length of list-1)
//add at end of list

else {
//pointer equals pointer next
}

