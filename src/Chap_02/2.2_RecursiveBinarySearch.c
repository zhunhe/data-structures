#include <stdio.h>

// 이진 탐색 알고리즘(재귀로 구현)
int BSearchRecur(int ar[], int first, int last, int target)
{
	int mid;
	if (first > last)
		return -1;
	mid = (first+last) / 2;

	if (ar[mid] == target)		// 탐색 성공
		return mid;
	else if (target < ar[mid])	// DOWN
		return BSearchRecur(ar, first, mid-1, target);
	else						// UP
		return BSearchRecur(ar, mid+1, last, target);
}

int main(void)
{
	int arr[] = {1, 3, 5, 7, 9};
	int idx;

	// arr에서 7이 있는지, 있다면 몇번째 인덱스에 있는지 검색
	idx = BSearchRecur(arr, 0, sizeof(arr)/sizeof(arr[0]) - 1, 7);
	if (idx == -1)
		printf("탐색 실패\n");
	else
		printf("타겟 저장 인덱스: %d\n", idx);

	// arr에서 4가 있는지, 있다면 몇번째 인덱스에 있는지 검색
	idx = BSearchRecur(arr, 0, sizeof(arr)/sizeof(arr[0]) - 1, 4);
	if (idx == -1)
		printf("탐색 실패\n");
	else
		printf("타겟 저장 인덱스: %d\n", idx);

	return 0;
}
