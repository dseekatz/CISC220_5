#David Seekatz				16das4 20037710
#Sean Eylott				13se18 10141657
#Simon Ungar        			14seau 10149546
#Brooke Resendes   			13brr2 10141112

# Rule 1
universalDoubleLinkedList: udll.o main.o
	gcc -Wall -o universalDoubleLinkedList udll.o main.o

# Rule 2
udll.o: udll.c udll.h
	gcc -Wall -c udll.c

# Rule 3
main.o: main.c
	gcc -Wall -c main.c
