#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int num;
	int i, j;
	int gugudan[9][9];
	printf("--������ ǥ�� ������ �����ϴ�.\n");
	for (i = 2; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			gugudan[i][j];
			printf("%3d ", i * j);
		}
		printf("\n");
	}
	printf("--���ϴ� ��������? ");
	scanf("%d", &num);
	for (i = 1; i < 10; i++) {
		printf("%3d ", num * i);
	}
	printf("\n");
}