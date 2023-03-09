#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int sumUpData(int*, int);
void printData(int*, int);
int maxData(int*, int);

void main()
{
	int k;
	int* p;
	int sum;

	int data[10]; //��� ���࿡ ����� ���� ����

	p = data; //p=&data[0]
	srand(time(NULL)); //random �� ��¿� ����ϴ� �Լ�, Seed �� �ο�

	for (k = 0; k < 10; k++) //index 0~9 ����
		*p++ = rand() % 100; //������ �ʱ�ȭ, 0���� 99������ Random�� ���

	sum = sumUpData(data, 10);
	printf("������Ʈ�� ���� %d\n", sum);

	printf("������Ʈ���� ");
	printData(data, 10);

	printf("\n������Ʈ�� �� ���� ū���� %d\n", maxData(data, 10));
}
int sumUpData(int* p, int size)
{
	int i, sum = 0;
	for (i = 0; i < 10; i++)
		sum += *p++;
	return sum;
}
void printData(int* p, int size)
{
	int i;
	for (i = 0; i < 10; i++)
		printf("%d ", *p++);
}
int maxData(int* p, int size)
{
	int i, max = 0;
	for (i = 0; i < 10; i++) {
		if (max < *p)
			max = *p;
		p++;
	}
	return max;
}