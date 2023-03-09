#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char word[81];
	int i, num = 0, sum = 0;

	printf("Enter a word: ");
	scanf("%s", word);

	for (i = 0; word[i] != '\0'; i++) {
		if (word[i] >= '0' && word[i] <= '9') {
			num = word[i] - '0';

			while (word[i + 1] >= '0' && word[i + 1] <= '9') {
				num = (num * 10) + word[i + 1] - '0';
				i++;
			}
			sum += num;
		}
	}
	printf("글자 안의 수의 합은 %d\n", sum);

	return 0;
}