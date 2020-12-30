#include <stdio.h>

// <이진 탐색 알고리즘>
// 절반씩 범위를 줄여가며 대상을 찾아가는 알고리즘(Like UP-DOWN game)
// 정렬된 자료구조에서만 사용가능!!

/* 
 * int BSearch(int ar[], int len, int target)
 * int ar[]: 검색할 배열(정렬 후 사용)
 * int len: 배열 길이
 * int target: 찾을 대상
 * return: -1: 배열에 대상이 존재하지 않음
 *         mid: 대상이 저장되어 있는 인덱스 값
 */
int BSearch(int ar[], int len, int target)
{
	int first = 0;
	int last = len-1;
	int mid;

	while (first <= last)
	{
		mid = (first+last) / 2;

		if (target == ar[mid])	// 정답
		{
			return mid;
		}
		else
		{
			if (target < ar[mid])	// DOWN
			{
				last = mid-1;	// (중요)mid는 확인이 끝났으므로 -1해준다 
			}
			else					// UP
			{
				first = mid+1;	// (중요)mid는 확인이 끝났으므로 +1해준다
			}
		}
	}
	return -1;
}

int main(void)
{
	int arr[] = {1, 3, 5, 7, 9};
	int idx;

	idx = BSearch(arr, sizeof(arr)/sizeof(arr[0]), 7);
	if (idx == -1)
		printf("탐색 실패\n");
	else
		printf("타겟 저장 인덱스: %d \n", idx);

	return 0;
}
