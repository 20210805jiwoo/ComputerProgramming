#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//���ڿ� w2 �� ���ڿ� w1 �� start ��ġ�� ������ 1 ��, �ƴϸ� 0 �� ��ȯ�ϴ� �Լ�
int is_word_in_word(char w1[], int start, char w2[])
{
	int i;
	for (i = 0; w1[i] != '\0'; i++)
	{
		w1[start] = w2[0];
		w1[start + 1] = w2[1];
		w1[start + 1] = w2[1];
		w1[start + 2] = w2[2];
		w1[start + 3] = w2[3];
		w1[start + 4] = w2[4];
	}
	w1[i] = '\0';
}
int main(void)
{
	char s1[20], s2[20];
	int i, j;

	scanf("%s", s1);
	scanf("%s", s2);

	for (i = 0; s1[i] != '\0'; i++)
		printf("%d", is_word_in_word(s1, i, s2));
}
