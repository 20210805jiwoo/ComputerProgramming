#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char word[81], newWord[81];

	int i, j = 0;

	printf("Enter one word: ");
	scanf("%s", word);

	printf("word given: %s\n", word);

	for (i = 0; word[i] != '\0'; i++) {
		if (word[i] >= 65 && word[i] < 97) {
			newWord[j] = word[i] + 32;
			j++;
		}
		else if (word[i] >= 97) {
			newWord[j] = word[i] - 32;
			j++;
		}
		else {
			newWord[j] = word[i];
			j++;
		}
	}
	printf("new word: ");
	newWord[j] = '\0';
	printf("%s\n", newWord);

	return 0;
}
