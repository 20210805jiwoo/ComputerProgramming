#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int fibo(int n);
int main(void)
{
	int n, idx;

	printf("몇개의 피보나치 수열값을 출력할까요? (3보다 큰 정수):");
	scanf("%d", &n);

	for (idx = 0; idx < n; idx++)
	{
		printf("%d ", fibo(idx));
		if ((idx + 1) % 5 == 0)
			printf("\n");
	}
	printf("\n");
}

int fibo(int n) //재귀적으로 구현하지 않는다
{
	int i;
	int result = 0;
	int f1 = 1;
	int f2 = 1;
	if (n == 0 || n == 1)
		return 1;
	else {
		for (i = 0; i < n - 1; i++)
		{
			result = f1 + f2;
			f1 = f2;
			f2 = result;
		}
		return result;
	}
}

//위랑 도는 횟수를 맞춰줘야 한다,,