#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_STRING 81
#define BOOL int
#define TRUE 1
#define FALSE 0

//Palindrome 검사
BOOL isPalindrome(char str[]);

int main(void)
{
	char str[MAX_STRING];

	printf("* Palindrome 체크\n\n");
	printf("문자열 입력 (문자수 %d 이하): ", MAX_STRING);
	scanf("%s", str);

	if (isPalindrome(str)) //Palindrome 검사
		printf("\"%s\" is a Palindrome\n\n", str);
	else
		printf("\"%s\" isn't a Palindrome\n\n", str);
	return 0;
}

BOOL isPalindrome(char s[])
{
	int i, length;
	for (i = 0; s[i] != '\0'; i++);
	length = i; //왜?

	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] == s[length - 1 - i]) //인덱스 변수값과 n-1-인덱스 변수값 비교
			return TRUE;
	}
	return FALSE;
}
