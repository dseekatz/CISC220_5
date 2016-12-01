#include<stdlib.h>
#include<stdio.h>
#include "udll.h" 

//David Seekatz				16das4 20037710
//Sean Eylott				13se18 10141657
//Simon Ungar        			14seau 10149546
//Brooke Resendes   			13brr2 10141112

/* The main function for testing the four linked list function */
int main() {
	printf("This is the test function.\n\n");
	
	printf("The value stored in the head node is %d\n",head.data.d);
	printf("The value stored in the last node is %d\n",last.data.d);

	printf("Adding an integer of value 9 at index 1...\n");
	union Data data;
	int myint = 9;
	data.d = myint;
	int type = 0;
	int index = 1;
	insert(index, data, type);
	data = get(1);
	printf("The value stored at index 1 of the list is %d\n",data.d);
	printf("The length of the list is %d\n",length());

	printf("Adding an integer pointer at index 2... \n");
	data.ptrd = &myint;
	type = 1;
	index = 2;
	insert(index, data, type);
	data = get(2);
	printf("The value stored at index 2 of the list is %p\n",data.ptrd);
	printf("The length of the list is %d\n",length());

	printf("Adding a string containing 'abc'  at index 1...\n");
	char* mystring = "abc";
	data.ptrc = mystring;
	type = 5;
	index = 1;
	insert(index, data, type);
	data = get(1);
	printf("The value stored at index 1 of the list is %s\n",data.ptrc);
	printf("The length of the list is %d\n",length());

	printf("Removing the node at index 2 of the list...\n");
	removeNode(2);
	data = get(1);
	printf("The value stored at index 1 of the list is now %s\n",data.ptrc);
	data = get(2);
	printf("The value stored at index 2 of the list is now %p\n",data.ptrd);
	printf("The length of the list is now %d\n",length());
	
	return 0;
} // end main
