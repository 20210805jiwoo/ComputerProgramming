#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int stringCompare(const char* s1, const char* s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2) {
			if (*s1 > *s2)
				return -1;
			else
				return 1;
		}
		s1++;
		s2++;
	}
	return 0;
}
void stringCat(char* s1, const char* s2)
{
	while (*s1)
		s1++;
	while (*s2)
	{
		*s1 = *s2;
		s2++;
		s1++;
	}
	*s1 = '\0';
}
//const s2라 그대로 두고 s1 뒤에 s2 붙임
//결과적으로 s1만 변함
//앞부분은 그대로지만 뒤가 변하닊 s2를 늘려가면서 붙여줄 때 s1도 늘려줌
void stringChange(char* s, char ch, char newCh)
{
	while (*s)
	{
		if (*s == ch)
			*s = newCh;
		s++;
	}
}
//문자열안의 ch를 newCh로 바꿔줌
int main(void)
{
	char name1[20];
	char name2[20];

	printf("Enter the first name: ");
	scanf("%s", name1);
	printf("Enter the second name: ");
	scanf("%s", name2);

	if (stringCompare(name1, name2) == 0)
		printf("두개의 이름은 같다\n");
	else if (stringCompare(name1, name2) == 1)
		printf("두개의 이름은 다르며 정렬되어있다\n");
	else
		printf("두개의 이름은 다르며 정렬되어있지않다\n");
	stringCat(name1, name2);
	printf("The concatenated name is %s\n", name1);

	stringChange(name1, 'u', 'x');
	printf("The changed name is %s\n", name1);
}