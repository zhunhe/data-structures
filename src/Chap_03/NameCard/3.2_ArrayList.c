#include <stdio.h>
#include "3.2_ArrayList.h"

// 초기화할 리스트의 주소 값을 인자로 전달한다
// 리스트 생성 후 제일 먼저 호출되어야 하는 함수이다
void ListInit(List *plist)
{
	(plist->numOfData) = 0;
	(plist->curPosition) = -1;
}

// 매개변수 data에 전달된 값을 리스트에 저장한다
void LInsert(List *plist, LData data)
{
	if (plist->numOfData > LIST_LEN)	// 최대 저장 개수 넘으면
	{
		puts("저장이 불가능합니다.");
		return;
	}

	plist->arr[plist->numOfData] = data;	// 데이터 저장
	(plist->numOfData)++;					// 저장된 데이터수
}

// 첫 번째 데이터가 pdata가 가리키는 메모리에 저장된다
// 데이터의 참조를 위한 초기화가 진행된다
// 참조 성공시 TRUE, 실패시 FALSE 반환
int LFirst(List *plist, LData *pdata)
{
	if (plist->numOfData == 0)	// 저장된 데이터수가 0개
		return FALSE;

	(plist->curPosition) = 0;	// 첫 번째 index로
	*pdata = plist->arr[0];
	return TRUE;
}

// 참조된 데이터의 다음 데이터가 pdata가 가리키는 메모리에 저장된다
// 순차적인 참조를 위해서 반복 호출이 가능하다
// 참조를 새로 시작하려면 먼저 LFirst 함수를 호출해야 한다
// 참조 성공 시 TRUE, 실패 시 FALSE 반환
int LNext(List *plist, LData *pdata)
{
	if (plist->curPosition >= (plist->numOfData)-1)		// 저장된 데이터 수를 넘어선 index
		return FALSE;

	(plist->curPosition)++;						// 다음 index로
	*pdata = plist->arr[plist->curPosition];	// 다음 데이터로
	return TRUE;
}

// LFirst 또는 LNext 함수의 마지막 반환 데이터를 삭제한다
// 삭제된 데이터는 반환된다
// 마지막 반환 데이터를 삭제하므로 연이은 반복 호출을 허용하지 않는다
LData LRemove(List *plist)
{
	int rpos = plist->curPosition;
	int num = plist->numOfData;
	LData rdata = plist->arr[rpos];		// 삭제될 데이터

	// 현재 index로부터 마지막 데이터까지 한 칸씩 앞으로 땡긴다
	for (int i = rpos; i < num-1; i++)
		plist->arr[i] = plist->arr[i+1];

	(plist->numOfData)--;		// 저장된 데이터수 감소
	(plist->curPosition)--;		// 현위치의 데이터가 삭제되었으므로 index 위치 한 칸 앞으로

	return rdata;
}

// 리스트에 저장되어 있는 데이터의 수를 반환한다
int LCount(List *plist)
{
	return plist->numOfData;
}
