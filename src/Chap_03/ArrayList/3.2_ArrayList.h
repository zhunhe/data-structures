#ifndef __3.2_ARRAY_LIST_H__
#define __3.2_ARRAY_LIST_H__

#define TRUE	1
#define FALSE	0

// ArrayList의 정의
#define LIST_LEN	100
typedef int LData;

typedef struct __ArrayList
{
	LData arr[LIST_LEN];	// 리스트의 저장소인 배열
	int numOfData;			// 전체 데이터수(마지막 index)
	int curPosition;		// 현재 index위치
} ArrayList;


// ArrayList와 관련된 연산들
typedef ArrayList List;

void ListInit(List *list);				// 초기화
void LInsert(List *plist, LData data);	// 데이터 저장
int LFirst(List *plist, LData *pdata);	// 첫 데이터 참조
int LNext(List *plist, LData *pdata);	// 다음 데이터 참조
LData LRemove(List *plist);				// 데이터 삭제
int LCount(List *plist);				// 데이터수 반환

#endif
