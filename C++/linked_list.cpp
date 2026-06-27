#include<stdio.h>
#include<stdlib.h>

// singly linked list
/*typedef struct Node{
	int data;
	struct Node* next;
}Node;

Node* createNode(int data){
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (!newNode){
		printf("Memory Allocation Failed!");
		exit(1);
	}
	newNode -> data = data;
	newNode -> next = NULL;
	return newNode;
}

void printNode(Node* node){
	while(node){
		printf("%d ->",node-> data);
		node = node-> next;
	}
	printf("Null \n");
}

int main(){
	Node* node1 = createNode(3);
	Node* node2 = createNode(4);
	Node* node3 = createNode(5);
	Node* node4 = createNode(6);

	node1 ->next = node2;
	node2 -> next = node3;
	node3 -> next = node4;

	printNode(node1);

	free(node1);
	free(node2);
	free(node3);
	free(node4);

	return 0;
}
*/

//Doubly Linked List
/*
typedef struct Node{
	int data;
	struct Node* next;
	struct Node* prev;
}Node;

Node* createNode(int data){
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (!newNode) {
		printf("Memory Allocation Failed!");
		exit(1);
	}
	newNode -> data = data;
	newNode -> next = NULL;
	newNode -> prev = NULL;

	return newNode;
}

void traversal_forward(Node* node){
	while (node){
		printf("%d -> ",node->data);
		node = node -> next;
	}
	printf("NULL\n");
}
void traversal_rev(Node* node){
	while (node){
		printf("%d -> ", node->data);
		node = node-> prev;
	}
	printf("NULL \n");
}

int main(){
	Node* node1 = createNode(1);
	Node* node2 = createNode(2);
	Node* node3 = createNode(3);
	Node* node4 = createNode(4);

	node1->next = node2;
	node2->prev = node1;
	node2->next = node3;
	node3->prev = node2;
	node3->next = node4;
	node4->prev = node3;

	traversal_forward(node1);
	traversal_rev(node4);

	return 0;
}
*/

//Cyclic Linked-List

typedef struct Node{
	int data;
	struct Node* next;
	struct Node* prev;
}Node;

Node* createNode(int data){
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (!newNode){
		printf("Memory Allocation Failed");
		exit(1);
	}
	newNode -> data = data;
	newNode -> next = NULL;
	newNode -> prev = NULL;
	return newNode;
}

void traversal(Node* node, bool isForward = true){
	Node* head = node;
	while(node){
		if (isForward){
			printf("%d -> ", node->data);
			node = node -> next;
		}else{
			printf("%d -> ", node->data);
			node = node -> prev;
		}
		if (node == head){
			printf("%d \n", node -> data);
			return;
		}
	}
}

int main(){
	
	Node* node1 = createNode(1);
	Node* node2 = createNode(2);
	Node* node3 = createNode(3);
	Node* node4 = createNode(4);

	node1->next = node2;
	node2->prev = node1;
	node2->next = node3;
	node3->prev = node2;
	node3->next = node4;
	node4->prev = node3;
	node4->next = node1;
	node1->prev = node4;

	traversal(node1);
	traversal(node4, false);

	free(node1);
	free(node2);
	free(node3);
	free(node4);

	return 0;
}