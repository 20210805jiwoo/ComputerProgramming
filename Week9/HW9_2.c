#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
	char id[15], id1[10], id2[10];
	int year, age, byear, bage;
	int m, n;
	printf("�ֹε�Ϲ�ȣ �Է�<'-'����>: ");
	scanf("%s", id);

	strncpy(id1, id, 2);
	byear = atoi(id1) + 1900;
	printf("����� %d�⵵ ���̱���\n", byear);

	m = id[0] - 48;
	n = id[1] - 48;
	year = 10 * m + n;
	age = year - (1900 + year);

	if (id[7] == '1') {
		bage = byear + 77;
		printf("���ں��̽ñ���.\n");
		printf("��� ���� 77�� ���ϸ� %d���� ��ٰ� ���˴ϴ�.\n", bage);
	}
	else {
		bage = byear + 84;
		printf("���ں��̽ñ���.\n");
		printf("��� ���� 84�� ���ϸ� %d���� ��ٰ� ���˴ϴ�.\n", bage);
	}
	return 0;
}