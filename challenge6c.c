#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_STRING 81
int main()
{
	char str[MAX_STRING];
	int countA = 0, countE = 0, countI = 0, countO = 0, countU = 0;
	int i = 0;

	printf("���ڿ� �Է� (���ڼ� %d ����): ", MAX_STRING);
	scanf("%s", str);
	//���⿡ �ڵ带 �ִ´�
	for (i = 0; i < strlen(str); i++) {
		if (str[i] == 'a' || str[i] == 'A') {
			countA++;
		}
	}
	printf("a or A: %d ��\n", countA);

	for (i = 0; i < strlen(str); i++) {
		if (str[i] == 'e' || str[i] == 'E') {
			countE++;
		}
	}
	printf("e or E: %d ��\n", countE);

	for (i = 0; i < strlen(str); i++) {
		if (str[i] == 'i' || str[i] == 'I') {
			countI++;
		}
	}

	printf("i or I: %d ��\n", countI);
	for (i = 0; i < strlen(str); i++) {
		if (str[i] == 'o' || str[i] == 'O') {
			countO++;
		}
	}
	printf("o or O: %d ��\n", countO);

	for (i = 0; i < strlen(str); i++) {
		if (str[i] == 'u' || str[i] == 'U') {
			countU++;
		}
	}
	printf("u or U: %d ��\n", countU);

	return 0;
}