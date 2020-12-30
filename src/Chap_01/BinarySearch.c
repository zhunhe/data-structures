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
	int	opCount = 0;

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
		opCount++;	// 비교횟수 증가
	}
	printf("비교연산횟수: %d\n", opCount);
	return -1;
}

int main(void)
{
	int arr[] = {1, 3, 5, 7, 9};
	int arr1[500] = {0,};
	int arr2[5000] = {0,};
	int arr3[50000] = {0,};
	int idx;

	idx = BSearch(arr, sizeof(arr)/sizeof(arr[0]), 7);
	if (idx == -1)
		printf("탐색 실패\n");
	else
		printf("타겟 저장 인덱스: %d \n", idx);

	// 저장되지 않은 1을 찾으라고 명령
	idx = BSearch(arr1, sizeof(arr1)/sizeof(arr1[0]), 1);
	if (idx == -1)
		printf("탐색 실패\n\n");
	else
		printf("타겟 저장 인덱스: %d\n", idx);

	// 저장되지 않은 2을 찾으라고 명령
	idx = BSearch(arr2, sizeof(arr2)/sizeof(arr2[0]), 2);
	if (idx == -1)
		printf("탐색 실패\n\n");
	else
		printf("타겟 저장 인덱스: %d\n", idx);

	// 저장되지 않은 3을 찾으라고 명령
	idx = BSearch(arr3, sizeof(arr3)/sizeof(arr3[0]), 3);
	if (idx == -1)
		printf("탐색 실패\n\n");
	else
		printf("타겟 저장 인덱스: %d\n", idx);

	return 0;
}
