#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void initArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		arr[i] = rand() % 100;
	return;
}
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
void printMinMax(int arr[], int size)
{
	//�ּҰ�, �ִ밪 ã�Ƽ� �ε����� �Բ� ����ϵ��� ����
	int max = 0;
	int min = 100;
	int minIndex = 0;
	int maxIndex = 0;
	int i;

	for (i = 0; i < size; i++){
		if (arr[i] >= max) {
			max = arr[i];
			maxIndex = i;
		}
		if (arr[i] <= min) {
			min = arr[i];
			minIndex = i;
		}
	}
	printf("�ִ밪: �ε��� = %d, �� = %d\n", maxIndex, max);
	printf("�ּҰ�: �ε��� = %d, �� = %d\n", minIndex, min);

	return;
}
int main(void)
{
	int a[10];
	//srand(time(NULL));
	srand(100); //�������� �³� ������ seed 100���� ����
	initArray(a, 10);
	printArray(a, 10);
	printMinMax(a, 10);

	return 0;
}