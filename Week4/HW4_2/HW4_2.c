#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int fibo(int n);
int main(void)
{
	int n, idx;

	printf("��� �Ǻ���ġ �������� ����ұ��? (3���� ū ����):");
	scanf("%d", &n);

	for (idx = 0; idx < n; idx++)
	{
		printf("%d ", fibo(idx));
		if ((idx + 1) % 5 == 0)
			printf("\n");
	}
	printf("\n");
}

int fibo(int n) //��������� �������� �ʴ´�
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

//���� ���� Ƚ���� ������� �Ѵ�,,