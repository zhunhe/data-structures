#include <stdio.h>
#include <stdlib.h>
#include "4.2_DLinkedList.h"

static void FInsert(List *plist, LData data);
static void SInsert(List *plist, LData data);

// 리스트 생성 후 제일 먼저 호출되어야 하는 초기화함수
// List *plist: 초기화할 리스트의 주소
void ListInit(List *plist)
{
	plist->head = (Node *)malloc(sizeof(Node));
	plist->head->next = NULL;
	plist->comp = NULL;
	plist->numOfData = 0;
}

static void FInsert(List *plist, LData data)
{
	Node *newNode = (Node *)malloc(sizeof(Node));
	newNode->data = data;

	newNode->next = plist->head->next;
	plist->head->next = newNode;

	(plist->numOfData)++;
}

static void SInsert(List *plist, LData data)
{
	Node *newNode = (Node *)malloc(sizeof(Node));
	Node *pred = plist->head;
	newNode->data = data;

	while (   (pred->next != NULL)
	       && (plist->comp(data, pred->next->data)) )
	{
		pred = pred->next;
	}

	newNode->next = pred->next;
	pred->next = newNode;

	(plist->numOfData)++;
}

// plist가 가리키는 메모리에 data를 삽입한다
// 정렬기준이 있으면 SInsert를 없으면 FInsert를 호출
void LInsert(List *plist, LData data)
{
	if (plist->comp == NULL)
		FInsert(plist, data);
	else
		SInsert(plist, data);
}

// 첫번째 데이터가 pdata가 가리키는 메모리에 저장된다
// 성공시 TRUE, 실패시 FALSE
int LFirst(List *plist, LData *pdata)
{
	if (plist->head->next == NULL)
		return FALSE;

	plist->before = plist->head;
	plist->cur = plist->head->next;

	*pdata = plist->cur->data;
	return TRUE;
}

// 참조된 데이터의 다음 데이터가 pdata가 가리키는 메모리에 저장된다
// 참조를 처음부터 시작하려면 LFirst를 호출
int LNext(List *plist, LData *pdata)
{
	if (plist->cur->next == NULL)
		return FALSE;

	plist->before = plist->cur;
	plist->cur = plist->cur->next;

	*pdata = plist->cur->data;
	return TRUE;
}

// LFirst 또는 LNext함수의 마지막 반환 데이터를 삭제하고 return
// 마지막 반환 데이터를 삭제하므로 반복호출을 허용하지 않음
LData LRemove(List *plist)
{
	Node *rpos = plist->cur;
	LData rdata = rpos->data;

	plist->before->next = plist->cur->next;
	plist->cur = plist->before;

	free(rpos);
	(plist->numOfData)--;
	return rdata;
}

// 리스트에 저장되어 있는 데이터수 반환
int LCount(List *plist)
{
	return plist->numOfData;
}

// 리스트에 정렬의 기준이 되는 함수를 등록
void SetSortRule(List *plist, int (*comp)(LData d1, LData d2))
{
	plist->comp = comp;
}
