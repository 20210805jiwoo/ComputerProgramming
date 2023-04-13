#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sum_array(int arr[][4])
{
	int i, j;
	for (i = 0; i < 4; i++)
		for (j = 0; j < 3; j++)
		{
			arr[i][3] += arr[i][j]; // 가로 합
			arr[4][j] += arr[i][j]; // 세로 합
		}
}

int main(void)
{
	int gradeTable[5][4] = { {10,15,20,0},{30,35,20,0},
		{60,65,20,0},{90,95,20,0},{0,0,0,0} };
	int i, j;

	printf("a>\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 4; j++)
			printf("%4d", gradeTable[i][j]);
		printf("\n");
	}

	sum_array(gradeTable);

	printf("b>\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%4d", gradeTable[i][j]);
		printf("\n");
	}
}
