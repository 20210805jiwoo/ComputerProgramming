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
int main(void)
{
	int i;
	int index = 0;
	int num;
	int multiset[5];

	while (index < 5) {

		printf("다중집합에 추가할 원소 : ");
		scanf("%d", &num);

		for (i = 0; i <= index; i++) {
			multiset[index] = num;

		}
		index++;

		printSet(multiset, index);
	}

	return 0;
}