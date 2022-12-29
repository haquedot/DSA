#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
int main(){
	struct Node *head, *node1, *node2, *node3;
	node1 = (struct Node*) malloc(sizeof(int));
	node2 = (struct Node*) malloc(sizeof(int));
	node3 = (struct Node*) malloc(sizeof(int));
	head = node1;
	node1 -> data = 10;
	node1 -> next = node2;
	node2 -> data = 20;
	node2 -> next = node3;
	node3 -> data = 30;
	node3 -> next = NULL;
	printf("%d\n",	node1 -> data);
	printf("%d\n",	node2 -> data);
	printf("%d\n",	node3 -> data);
}
