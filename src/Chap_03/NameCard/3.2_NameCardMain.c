#include <stdio.h>
#include <stdlib.h>
#include "3.2_NameCard.h"
#include "3.2_ArrayList.h"

int main(void)
{
	List list;
	NameCard *pcard;
	ListInit(&list);

	pcard = MakeNameCard("Tom", "010-1234-5678");
	LInsert(&list, pcard);
	pcard = MakeNameCard("Bob", "010-8765-4321");
	LInsert(&list, pcard);
	pcard = MakeNameCard("Jack", "010-5678-1234");
	LInsert(&list, pcard);

	// Tom 정보 출력
	printf("Tom 정보 출력\n");
	if (LFirst(&list, &pcard))    // 첫 번째 데이터 조회
	{
		if (NameCompare(pcard, "Tom")==0)	// 이름이 Tom이면
			ShowNameCardInfo(pcard);

		while (LNext(&list, &pcard))    // 두 번째 이후의 데이터 조회
		{
			if (NameCompare(pcard, "Tom")==0)	// 이름이 Tom이면
				ShowNameCardInfo(pcard);
		}
	}
	printf("\n");

	// Bob 전화번호 변경
	printf("Bob 전화번호 변경\n\n");
	if (LFirst(&list, &pcard))    // 첫 번째 데이터 조회
	{
		if (NameCompare(pcard, "Bob")==0)	// 이름이 Bob이면
			ChangePhoneNum(pcard, "010-9999-1111");

		while (LNext(&list, &pcard))    // 두 번째 이후의 데이터 조회
		{
			if (NameCompare(pcard, "Bob")==0)	// 이름이 Bob이면
				ChangePhoneNum(pcard, "010-9999-1111");
		}
	}

	// Jack 전화번호 변경
	printf("Jack 전화번호 변경\n\n");
	if (LFirst(&list, &pcard))    // 첫 번째 데이터 조회
	{
		if (NameCompare(pcard, "Jack")==0)	// 이름이 Jack이면
			LRemove(&list);

		while (LNext(&list, &pcard))    // 두 번째 이후의 데이터 조회
		{
			if (NameCompare(pcard, "Jack")==0)	// 이름이 Jack이면
				LRemove(&list);
		}
	}

	// 남아있는 사람 정보 출력
	printf("남아있는 사람 정보 출력\n");
	if (LFirst(&list, &pcard))    // 첫 번째 데이터 조회
	{
		ShowNameCardInfo(pcard);

		while (LNext(&list, &pcard))    // 두 번째 이후의 데이터 조회
		{
			ShowNameCardInfo(pcard);
		}
	}

	return 0;
}
