#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_STRING 81
int main()
{
	char str[MAX_STRING];
	int countA = 0, countE = 0, countI = 0, countO = 0, countU = 0;
	int i = 0;

	printf("문자열 입력 (문자수 %d 이하): ", MAX_STRING);
	scanf("%s", str);
	//여기에 코드를 넣는다
	for (i = 0; i < strlen(str); i++) {
		if (str[i] == 'a' || str[i] == 'A') {
			countA++;
		}
	}
	printf("a or A: %d 개\n", countA);

	for (i = 0; i < strlen(str); i++) {
		if (str[i] == 'e' || str[i] == 'E') {
			countE++;
		}
	}
	printf("e or E: %d 개\n", countE);

	for (i = 0; i < strlen(str); i++) {
		if (str[i] == 'i' || str[i] == 'I') {
			countI++;
		}
	}

	printf("i or I: %d 개\n", countI);
	for (i = 0; i < strlen(str); i++) {
		if (str[i] == 'o' || str[i] == 'O') {
			countO++;
		}
	}
	printf("o or O: %d 개\n", countO);

	for (i = 0; i < strlen(str); i++) {
		if (str[i] == 'u' || str[i] == 'U') {
			countU++;
		}
	}
	printf("u or U: %d 개\n", countU);

	return 0;
}