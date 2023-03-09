#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int twoPower(int x);
int main(void)
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);

	printf("2의 %d승은 %d이다\n", n, twoPower(n));
}

int twoPower(int x)
{
	if (x == 0) //마지막까지 오면
		return 1; //1 반환하고 재귀호출 끝
	else
		return 2 * twoPower(x - 1); //2 곱하고 재귀호출
}