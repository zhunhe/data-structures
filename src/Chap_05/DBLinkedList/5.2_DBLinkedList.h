#ifndef __DB_LINKED_LIST_H__
#define __DB_LINKED_LIST_H__

#define	TRUE	1
#define	FALSE	0

typedef	int Data;

typedef struct _Node {
	Data data;
	struct _Node *next;
	struct _Node *prev;
} Node;

typedef struct _DLinkedList {
	Node *head;
	Node *cur;
	int numOfData;
} DBLinkedList;

typedef DBLinkedList List;

void ListInit(List *plist);
void LInsert(List *plist, Data data);
int LFirst(List *plist, Data *pdata);
int LNext(List *plist, Data *pdata);
int LPrev(List *plist, Data *pdata);
int LCount(List *plist);

#endif
