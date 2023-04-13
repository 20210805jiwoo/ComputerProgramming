#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void selectionSort(int list[], int size);
int main(void)
{
	int i, j, a[10], temp;

	//srand(time(NULL));

	printf("발생된 난수:    ");
	for (i = 0; i < 10; i++)
	{
		a[i] = rand() % 100;
		printf("%d ", a[i]);
	}
	printf("\n");

	for (i = 0; i < 9; i++) {
		for (j = i + 1; j < 10; j++) {
			if (a[i] > a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("정렬 후:        ");
	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}