#include <stdio.h>

// Hanoi 타워 재귀함수로 구현한 함수
// from에 꽂혀있는 원반 num개를 by를 거쳐 to로 이동
void HanoiTower(int num, char from, char by, char to)
{
	if (num == 1)
	{
		printf("원반1을 %c에서 %c로 이동\n", from, to);
		return;
	}
	HanoiTower(num-1, from, to, by);
	printf("원반%d을 %c에서 %c로 이동\n", num, from, to);
	HanoiTower(num-1, by, from, to);
}

int main(void)
{
	HanoiTower(3, 'A', 'B', 'C');
	return 0;
}
