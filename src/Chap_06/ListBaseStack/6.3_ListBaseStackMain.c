#include <stdio.h>
#include <stdlib.h>
#include "6.3_ListBaseStack.h"

int main(void)
{
	// Stack 생성, 초기화
	Stack stack;
	StackInit(&stack);

	// 데이터 입력
	for (int i = 1; i <= 5; i++)
		SPush(&stack, i);

	// 데이터 꺼내기
	while (! SIsEmpty(&stack))
		printf("%d ", SPop(&stack));

	return 0;
}
