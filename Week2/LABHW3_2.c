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
	//최소값, 최대값 찾아서 인덱스와 함께 출력하도록 정의
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
	printf("최대값: 인덱스 = %d, 값 = %d\n", maxIndex, max);
	printf("최소값: 인덱스 = %d, 값 = %d\n", minIndex, min);

	return;
}
int main(void)
{
	int a[10];
	//srand(time(NULL));
	srand(100); //실행결과가 맞나 보려고 seed 100으로 고정
	initArray(a, 10);
	printArray(a, 10);
	printMinMax(a, 10);

	return 0;
}