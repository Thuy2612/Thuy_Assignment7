#include <stdio.h>
#include <stdlib.h>

struct NODE{
	int data;
	struct NODE* next;
};
typedef struct NODE* node;
node creatNode(int value);
node creattList();
node addHead(node head, int value);
node addTail(node head, int value);
node addPosition(node head, int value, int position);
node delHead(node head);
node delTail(node head);
node delPosition(node head, int position);
int searchElement(node head, int value);
void printfList(node head);

