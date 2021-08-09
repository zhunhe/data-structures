#include <stdio.h>
#include <stdlib.h>
#include "6.3_ListBaseStack.h"

// Stack 초기화
void StackInit(Stack *pstack)
{
	pstack->head = NULL;
}

// Stack 비었는지 확인
int SIsEmpty(Stack *pstack)
{
	if (pstack->head == NULL)
		return TRUE;
	else
		return FALSE;
}

// Stack 데이터 입력
void SPush(Stack *pstack, Data data)
{
	Node *newNode = (Node *)malloc(sizeof(Node));

	newNode->data = data;
	newNode->next = pstack->head;

	pstack->head = newNode;
}

// Stack 데이터 삭제 및 반환
Data SPop(Stack *pstack)
{
	Data rdata;
	Node *rnode;

	if (SIsEmpty(pstack))
	{
		printf("Stack Memory Error!\n");
		exit(-1);
	}
	rdata = pstack->head->data;
	rnode = pstack->head;

	pstack->head = pstack->head->next;
	free(rnode);

	return rdata;
}

// Stack 데이터 반환
Data SPeek(Stack *pstack)
{
	if (SIsEmpty(pstack))
	{
		printf("Stack Memory Error!\n");
		exit(-1);
	}
	return pstack->head->data;
}

