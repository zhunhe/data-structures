#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3.2_NameCard.h"

// NameCard 구조체 변수의 동적 할당 및 초기화 후 주소 값 반환
NameCard *MakeNameCard(char *name, char *phone)
{
	NameCard *newCard = (NameCard *)malloc(sizeof(NameCard));
	strncpy(newCard->name, name, NAME_LEN);
	strncpy(newCard->phone, phone, PHONE_LEN);

	return newCard;
}

// NameCard 구조체 변수의 정보 출력
void ShowNameCardInfo(NameCard *pcard)
{
	printf("name: %s\n", pcard->name);
	printf("phone: %s\n", pcard->phone);
}

// 이름이 같으면 0, 다르면 0이 아닌 값 반환
int NameCompare(NameCard *pcard, char *name)
{
	return strcmp(pcard->name, name);
}

// 전화번호 정보를 변경
void ChangePhoneNum(NameCard *pcard, char *phone)
{
	strncpy(pcard->phone, phone, PHONE_LEN);
}
