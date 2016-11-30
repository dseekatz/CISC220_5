# Rule 1
universalDoubleLinkedList: udll.o main.o
	gcc -Wall -o universalDoubleLinkedList udll.o main.o

# Rule 2
udll.o: udll.c udll.h
	gcc -Wall -c udll.c

# Rule 3
main.o: main.c
	gcc -Wall -c main.c
