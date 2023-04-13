#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printSet(int list[], int size)
{
	int i;
	printf("{ ");
	for (i = 0; i < size; i++)
	{
		if (i != 0 && i < size)
			printf(", ");
		printf("%d", list[i]);

	}
	printf(" }");
	printf("\n");
}

int is_in(int number, int list[], int index)
{
	int j;
	for (j = 0; j <= index; j++)
	{
		if (number == list[j])
			return 0;
	}
	return 1;
}

int main(void)
{
	int i, num, index = 0;
	int set[5];

	for (i = 0; index < 5; i++)
	{
		printf("집합에 추가할 원소 : ");
		scanf("%d", &num);

		if (is_in(num, set, index) == 0)
			printf("%d은 이미 집합에 있음\n", num);

		else
		{
			set[index] = num;
			index++;
			printSet(set, index);
		}
	}


	return 0;
}