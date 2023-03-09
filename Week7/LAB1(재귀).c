#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int n);
int main(void)
{
	int i,num;
	scanf("%d", &num);
	for (i = 1; i <= num; i++)
		printf("%d ", 10 * i + 2);
	printf("\n%d\n", sum(num));

	return 0;
}
int sum(int n)
{
	if (n == 1)
		return 12;
	else
		return (n * 10 + 2) + sum(n - 1);
}