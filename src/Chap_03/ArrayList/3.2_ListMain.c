#include <stdio.h>
#include "3.2_ArrayList.h"

int main(void)
{
	int data;
	int sum = 0;
	List list;
	ListInit(&list);	// 초기화

	// 5개의 데이터 저장
	for (int i = 1; i < 10; i++)
		LInsert(&list, i);

	// 저장된 데이터 출력
	printf("현재 데이터의 수: %d \n", LCount(&list));
	if(LFirst(&list, &data))    // 첫 번째 데이터 조회
	{
		printf("%d ", data);
		sum += data;
		
		while(LNext(&list, &data))    // 두 번째 이후의 데이터 조회
		{
			printf("%d ", data);
			sum += data;
		}
	}
	printf("\n\n");

	// 2의 배수, 3의 배수 삭제
	printf("2의 배수, 3의 배수 삭제\n\n");
	if(LFirst(&list, &data))
	{
		if(data%2 == 0 || data%3 == 0)
			LRemove(&list);	// LFirst에서 참조한 데이터 삭제
		
		while(LNext(&list, &data))
		{
			if(data%2 == 0 || data%3 == 0)
				LRemove(&list);		// LNext에서 참조한 데이터 삭제
		}
	}

	// 삭제 후 데이터 출력
	printf("현재 데이터의 수: %d \n", LCount(&list));
	if(LFirst(&list, &data))
	{
		printf("%d ", data);
		
		while(LNext(&list, &data))
			printf("%d ", data);
	}
	printf("\n");
	
	return 0;
}
