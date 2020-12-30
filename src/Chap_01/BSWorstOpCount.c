#include <stdio.h>

int BSearch(int ar[], int len, int target)
{
	int first = 0;
	int last = len-1;
	int mid;
	int	opCount = 0;

	while (first <= last)
	{
		mid = (first+last) / 2;

		if (target == ar[mid])
		{
			return mid;
		}
		else
		{
			if (target < ar[mid])
			{
				last = mid - 1;
			}
			else
			{
				first = mid + 1;
			}
		}
		opCount++;	// 비교횟수 증가
	}
	printf("비교연산횟수: %d\n", opCount);
	return -1;
}

int main(void)
{
	int arr1[500] = {0,};
	int arr2[5000] = {0,};
	int arr3[50000] = {0,};
	int idx;

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
