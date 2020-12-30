#include <stdio.h>

// n번째 피보나치 수열에 대한 값을 구하는 함수
int Fibo(int n)
{
	printf("func call param %d \n", n);

	if (n == 1)
		return 0;
	else if (n == 2)
		return 1;
	else
		return Fibo(n-2) + Fibo(n-1);
}

int main(void)
{
	printf("Fibo(7): %d\n", Fibo(7));

	return 0;
}
