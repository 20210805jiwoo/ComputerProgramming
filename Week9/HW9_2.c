#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
	char id[15], id1[10], id2[10];
	int year, age, byear, bage;
	int m, n;
	printf("주민등록번호 입력<'-'포함>: ");
	scanf("%s", id);

	strncpy(id1, id, 2);
	byear = atoi(id1) + 1900;
	printf("당신은 %d년도 생이군요\n", byear);

	m = id[0] - 48;
	n = id[1] - 48;
	year = 10 * m + n;
	age = year - (1900 + year);

	if (id[7] == '1') {
		bage = byear + 77;
		printf("남자분이시군요.\n");
		printf("평균 수명 77를 더하면 %d까지 산다고 계산됩니다.\n", bage);
	}
	else {
		bage = byear + 84;
		printf("여자분이시군요.\n");
		printf("평균 수명 84를 더하면 %d까지 산다고 계산됩니다.\n", bage);
	}
	return 0;
}