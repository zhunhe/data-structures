#include <stdio.h>
#include "5.2_DBLinkedList.h"

int main(void)
{
	// 양방향 링크드리스트 생성, 초기화
	List list;
	int data;
	ListInit(&list);

	// 데이터 저장
	LInsert(&list, 1);
	LInsert(&list, 2);
	LInsert(&list, 3);
	LInsert(&list, 4);
	LInsert(&list, 5);
	LInsert(&list, 6);
	LInsert(&list, 7);
	LInsert(&list, 8);

	// 데이터 출력
	if (LFirst(&list, &data))
	{
		printf("%d ", data);

		// ->로 이동하며 출력
		while (LNext(&list, &data))
			printf("%d ", data);

		// <-로 이동하며 출력
		while (LPrev(&list, &data))
			printf("%d ", data);
	}

	return 0;
}
