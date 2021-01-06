#include <stdio.h>
#include <stdlib.h>
#include "6.2_ArrayBaseStack.h"

// 초기화
void StackInit(Stack *pstack)
{
	pstack->topIndex = -1;
}

// Stack이 비었는지 확인
int SIsEmpty(Stack *pstack)
{
	if (pstack->topIndex == -1)
		return TRUE;
	else
		return FALSE;
}

// top에 데이터 입력
void SPush(Stack *pstack, Data data)
{
	pstack->topIndex += 1;
	pstack->stackArr[pstack->topIndex] = data;
}

// top에서 데이터 삭제 및 반환
Data SPop(Stack *pstack)
{
	int rIdx;

	if (SIsEmpty(pstack))
	{
		printf("Stack Memory Error!");
		exit(-1);
	}

	rIdx = pstack->topIndex;
	pstack->topIndex -= 1;

	return pstack->stackArr[rIdx];
}

// top에서 데이터 반환
Data SPeek(Stack *pstack)
{
	if (SIsEmpty(pstack))
	{
		printf("Stack Memory Error!");
		exit(-1);
	}

	return pstack->stackArr[pstack->topIndex];
}
