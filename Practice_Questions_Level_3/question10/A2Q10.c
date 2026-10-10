#include <stdio.h>
#include <stdlib.h>

struct node{
	int n_data;
	struct node *n_next;
}

int main();
	char choice = ' ';
	printf("a. Insert at the beginning.
	\nb. Insert at the given position.
	\nc. Insert at the end.
	\nd. Insert next to given node.
	\ne. Insert before the given node.
	\nf. Delete at the beginning.
	\ng. Delete at the given position.
	\nh. Delete at the end.
	\ni. Delete next to given node.
	\nj. Delete before the given node.
	\nk. Search an element.
	\nl. Reverse the linked-list.\n\n");
	printf("Enter your choice : ");
	scanf("%c", &choice);
	switch(choice){
		case 'a':
						insBegin();
