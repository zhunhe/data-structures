#ifndef	__LB_STACK_H__
#define	__LB_STACK_H__

#define	TRUE	1
#define	FALSE	0

typedef int Data;

typedef struct _Node {
	Data data;
	struct _Node *next;
} Node;

typedef struct _ListStack {
	Node *head;
} ListStack;

typedef ListStack Stack;

void StackInit(Stack *pstack);
int SIsEmpty(Stack *pstack);

void SPuch(Stack *pstack, Data data);
Data SPop(Stack *pstack);
Data SPeek(Stack *pstack);

#endif
