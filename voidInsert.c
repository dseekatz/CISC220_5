//This function creates a new node and inserts it in a specific spot
//Include this in the universalDoubleLinkedList program after
//need to update with the length function now

#include<stdlib.h>
#include<stdio.h>

//Create a new node
typedef struct Node {
	int data;
	struct Node* next;
} Node;

struct Node *head; //Assign head as start of linked list

void insert(int index, int data) { //union Data data) {
	Node* curr;
	curr = 0;
	Node* newNode; 

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
	


